#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -857792033997483348LL;
unsigned long long int var_4 = 17708478859924046198ULL;
unsigned char var_7 = (unsigned char)199;
unsigned char var_8 = (unsigned char)148;
int var_9 = 2146085084;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1741804774725301435LL;
int var_12 = 1931825529;
unsigned long long int var_15 = 9833485171759663803ULL;
int var_17 = 518541603;
long long int var_18 = 3253695307692272248LL;
int var_19 = 1467830178;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -938770744;
short var_22 = (short)-221;
unsigned short var_23 = (unsigned short)15693;
int var_24 = -962723993;
unsigned int var_25 = 2634026536U;
unsigned char var_26 = (unsigned char)204;
unsigned char var_27 = (unsigned char)13;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)47;
unsigned char var_30 = (unsigned char)133;
long long int var_31 = -5337695365087247096LL;
unsigned char var_32 = (unsigned char)35;
int var_33 = -1405005670;
unsigned int var_34 = 1317033537U;
int var_35 = 1483973079;
int var_36 = -1794108714;
unsigned char var_37 = (unsigned char)0;
short var_38 = (short)958;
unsigned int var_39 = 3026628183U;
short arr_0 [20] ;
_Bool arr_1 [20] ;
int arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned char arr_5 [20] [20] ;
unsigned char arr_7 [20] [20] [20] ;
int arr_9 [20] [20] ;
unsigned short arr_18 [23] ;
short arr_19 [23] ;
short arr_21 [23] [23] ;
unsigned int arr_22 [23] [23] [23] ;
int arr_2 [20] ;
unsigned char arr_8 [20] [20] [20] ;
unsigned int arr_16 [20] ;
unsigned long long int arr_17 [20] ;
unsigned char arr_20 [23] [23] ;
unsigned short arr_23 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)11705;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1651840647;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = -755222427;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)10296;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (short)32118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-25538;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3265821714U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -640345083;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 409467530U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 3757453928864498001ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46703 : (unsigned short)5686;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
