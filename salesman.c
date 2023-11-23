#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[80], code;
    int sNum, quantity, unitPrice;
    float sales, commision;

    p("Salesman No.: ");
    s("%d", &sNum);
    p("Salesman Name: ");
    s(" %[^\n]", name);
    p("Quantity: ");
    s("%d", &quantity);
    p("Unit Price per item: ");
    s(" %d", &unitPrice);
    p("Terms of Payment Code: ");
    s(" %c", &code);
    
    sales = quantity * unitPrice;
    
    if(sales >= 5000 && sales <= 10000) {
    	commision = 0.1 * sales;
	}
	else if (sales >= 10001 && sales <= 15000) {
		commision = 0.2 * sales;
	}
	else if (sales >= 15001 && sales <= 20000) {
		commision = 0.3 * sales;
	}
	else if (sales >= 20001 && sales <= 25000) {
		commision = 0.4 * sales;
	}
	else if (sales >= 25001) {
		commision = 0.5 * sales;
	}
	else {
		p("error");
	}
    
    p("Salesman No.: %d\n", sNum);
    p("Salesman Name: %s\n", name);
    p("Quantity: %d\n", quantity);
    p("Unit Price per item: %d\n", unitPrice);
    p("Sales: %.2f\n", sales);
    p("Commision: %.2f\n", commision);
    p("Payment Code: %c\n", code);
    switch (code) {
	    case 'C':
	    case 'c':
	        p("Payment Description: Full payment");
	        break;
		case 'D':
	    case 'd':
	        p("Payment Description: 6 months to pay");
	        break;
	    case 'E':
	    case 'e':
	        p("Payment Description: 12 months to pay");
	        break;
	    case 'G':
	    case 'g':
	        p("Payment Description: 24 months to pay");
	        break;
	    default:
	        p("Payment Description: error");
	        break;
	}
	
	return 0;
}
