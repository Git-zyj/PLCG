#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3782519983U;
unsigned long long int var_1 = 7307085115811704335ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 15853443648961068171ULL;
unsigned int var_5 = 3640985357U;
unsigned int var_7 = 2182738350U;
unsigned int var_8 = 1482641037U;
unsigned short var_9 = (unsigned short)11523;
unsigned int var_10 = 1515899187U;
short var_11 = (short)-27416;
unsigned long long int var_12 = 8607243949182589882ULL;
short var_13 = (short)-2175;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 943249498U;
unsigned int var_16 = 3596915487U;
unsigned short var_17 = (unsigned short)27853;
int zero = 0;
short var_18 = (short)-6213;
unsigned char var_19 = (unsigned char)240;
unsigned short var_20 = (unsigned short)39675;
unsigned int var_21 = 1104037380U;
unsigned int var_22 = 3353680528U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 15155524769770873112ULL;
short var_25 = (short)4734;
unsigned short var_26 = (unsigned short)43410;
unsigned short var_27 = (unsigned short)24194;
unsigned short var_28 = (unsigned short)63998;
unsigned short var_29 = (unsigned short)32870;
unsigned long long int var_30 = 146759492845464358ULL;
unsigned int var_31 = 3065476220U;
unsigned short var_32 = (unsigned short)41015;
unsigned int arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
unsigned short arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] ;
short arr_6 [15] ;
unsigned int arr_8 [15] [15] ;
unsigned short arr_11 [15] ;
_Bool arr_13 [19] ;
_Bool arr_16 [19] ;
unsigned char arr_17 [19] [19] [19] [19] ;
short arr_26 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1876096104U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 4168678211U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)41926;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-9056;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3107406994U : 3469224727U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)18858;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)27263 : (short)-32162;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
