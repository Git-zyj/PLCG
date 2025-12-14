#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5581160800133388399LL;
unsigned char var_2 = (unsigned char)121;
unsigned short var_3 = (unsigned short)6987;
unsigned long long int var_4 = 12976540216160383780ULL;
signed char var_5 = (signed char)-90;
int var_6 = 524237743;
short var_7 = (short)2367;
long long int var_8 = 1437109719507448788LL;
unsigned long long int var_9 = 15095054054260004771ULL;
int var_10 = -264931127;
unsigned short var_11 = (unsigned short)33348;
unsigned short var_12 = (unsigned short)46706;
unsigned long long int var_14 = 14299859738913294891ULL;
unsigned char var_15 = (unsigned char)82;
unsigned int var_16 = 3891825167U;
int var_17 = 1640010585;
unsigned char var_18 = (unsigned char)206;
int zero = 0;
long long int var_19 = 7254063456900545006LL;
signed char var_20 = (signed char)-78;
int var_21 = -2057489951;
unsigned long long int var_22 = 10854173854466467695ULL;
long long int var_23 = -7692517650471987256LL;
signed char var_24 = (signed char)95;
unsigned long long int var_25 = 14501692058103218365ULL;
long long int var_26 = -27308098896295586LL;
unsigned long long int var_27 = 36396454476559952ULL;
unsigned int arr_0 [20] [20] ;
long long int arr_1 [20] [20] ;
long long int arr_2 [20] ;
unsigned char arr_3 [10] [10] ;
short arr_5 [10] ;
unsigned char arr_8 [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
int arr_11 [10] [10] [10] ;
unsigned char arr_6 [10] ;
unsigned short arr_13 [10] [10] [10] ;
unsigned long long int arr_14 [10] ;
unsigned short arr_15 [10] ;
int arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 3260621676U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -4295782549457219545LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2603329719349893695LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-24248 : (short)-3264;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6799557723998722334ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1635208184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)88 : (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)20060;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 12048940355697287305ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned short)24229;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 571822736;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
