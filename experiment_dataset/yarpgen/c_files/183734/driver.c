#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21398;
unsigned char var_2 = (unsigned char)246;
unsigned int var_4 = 3514653280U;
unsigned char var_5 = (unsigned char)13;
long long int var_6 = 7323200769088819095LL;
short var_8 = (short)-32149;
signed char var_10 = (signed char)56;
unsigned long long int var_11 = 11085929521775698291ULL;
unsigned long long int var_12 = 8492838264809923205ULL;
unsigned int var_14 = 2851777469U;
long long int var_15 = -4050950112561718947LL;
signed char var_17 = (signed char)115;
int var_18 = -1228248291;
int zero = 0;
unsigned short var_19 = (unsigned short)51121;
long long int var_20 = -3418518254238227613LL;
unsigned long long int var_21 = 11948733665799042679ULL;
unsigned char var_22 = (unsigned char)77;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-15557;
int var_25 = 1281032467;
int var_26 = -1019138399;
unsigned char var_27 = (unsigned char)77;
unsigned long long int var_28 = 15548880087651760556ULL;
signed char var_29 = (signed char)63;
unsigned long long int var_30 = 17679910028218423107ULL;
unsigned int var_31 = 2131931075U;
signed char var_32 = (signed char)25;
short arr_0 [16] ;
short arr_1 [16] ;
short arr_2 [16] ;
unsigned int arr_3 [16] ;
long long int arr_6 [16] ;
unsigned long long int arr_7 [16] [16] ;
short arr_11 [10] ;
unsigned char arr_16 [10] [10] [10] ;
int arr_17 [10] ;
unsigned int arr_20 [10] [10] ;
int arr_4 [16] [16] ;
short arr_5 [16] ;
unsigned char arr_8 [16] ;
_Bool arr_22 [10] [10] [10] [10] [10] ;
int arr_23 [10] [10] [10] ;
unsigned char arr_24 [10] ;
unsigned int arr_28 [10] ;
unsigned short arr_29 [10] [10] ;
long long int arr_30 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)12194;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)30673;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-26960;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3350926116U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 6613515631351643213LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 14814769865874516428ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-7646;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 472899508;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 2415598957U : 4024253981U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -500159717;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)2583;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)198 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 685539472 : 857083779;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = 295571123U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned short)22064;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = 2481248242616215883LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
