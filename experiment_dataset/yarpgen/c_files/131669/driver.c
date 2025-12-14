#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29167;
unsigned int var_1 = 3137916111U;
unsigned char var_2 = (unsigned char)160;
unsigned char var_5 = (unsigned char)5;
unsigned short var_6 = (unsigned short)10950;
unsigned short var_7 = (unsigned short)51288;
int var_8 = 2009361092;
unsigned char var_10 = (unsigned char)220;
unsigned long long int var_11 = 8333108516190894878ULL;
unsigned short var_12 = (unsigned short)22942;
unsigned long long int var_14 = 5774604616718572932ULL;
unsigned short var_15 = (unsigned short)28986;
unsigned short var_16 = (unsigned short)57857;
unsigned short var_17 = (unsigned short)17886;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2011519126;
int var_20 = 560128390;
unsigned short var_21 = (unsigned short)62218;
_Bool var_22 = (_Bool)0;
int var_23 = 516415833;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)143;
unsigned long long int var_26 = 17252875632135468747ULL;
unsigned long long int var_27 = 821031385568784084ULL;
unsigned short var_28 = (unsigned short)42685;
unsigned int var_29 = 322737855U;
int var_30 = 1393698198;
unsigned long long int var_31 = 14055347214711453036ULL;
unsigned char var_32 = (unsigned char)177;
long long int var_33 = 6564428043919735236LL;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)32360;
unsigned short var_36 = (unsigned short)27055;
unsigned long long int var_37 = 9534923161850455685ULL;
int var_38 = -460109035;
_Bool var_39 = (_Bool)1;
_Bool var_40 = (_Bool)1;
short var_41 = (short)21502;
unsigned long long int var_42 = 9514389804221359106ULL;
unsigned long long int var_43 = 3546711666383495740ULL;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)0;
unsigned long long int var_46 = 11499801573853745426ULL;
unsigned char var_47 = (unsigned char)106;
int var_48 = 139678632;
unsigned char var_49 = (unsigned char)44;
_Bool var_50 = (_Bool)1;
unsigned int var_51 = 1428247039U;
int var_52 = -1111310333;
unsigned short var_53 = (unsigned short)21513;
int var_54 = 1562479275;
_Bool var_55 = (_Bool)0;
int arr_0 [22] ;
_Bool arr_1 [22] ;
int arr_4 [22] [22] ;
unsigned char arr_6 [10] ;
unsigned short arr_7 [10] ;
unsigned short arr_14 [24] [24] ;
unsigned short arr_15 [24] [24] ;
_Bool arr_16 [24] [24] ;
short arr_17 [24] [24] [24] ;
signed char arr_20 [24] ;
int arr_21 [24] [24] [24] [24] ;
signed char arr_24 [24] [24] ;
int arr_30 [24] ;
_Bool arr_31 [24] ;
_Bool arr_33 [22] [22] ;
int arr_35 [14] [14] ;
long long int arr_37 [14] ;
unsigned char arr_39 [14] [14] ;
unsigned short arr_41 [14] [14] ;
_Bool arr_46 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1024764261;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 1338512739;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)58159;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)2637;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)61965;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-9784;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 314825080;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = -2087685044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = 1908118784;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 5664101107995244695LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned short)15718;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
