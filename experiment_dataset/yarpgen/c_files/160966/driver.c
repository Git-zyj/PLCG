#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3490109685U;
unsigned short var_2 = (unsigned short)61509;
unsigned long long int var_3 = 12337593808163258755ULL;
short var_5 = (short)-2059;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 10433413606289412134ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)183;
unsigned int var_21 = 112295339U;
unsigned long long int var_22 = 14380736591133178592ULL;
unsigned long long int var_23 = 3586708103923761888ULL;
short var_24 = (short)-11208;
unsigned int var_25 = 2118225943U;
unsigned int var_26 = 326726090U;
long long int var_27 = 4699858738450494062LL;
short var_28 = (short)6139;
short var_29 = (short)-1288;
int var_30 = 2107488282;
unsigned long long int var_31 = 265694997586005983ULL;
unsigned int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
short arr_3 [12] ;
unsigned long long int arr_4 [12] [12] ;
signed char arr_5 [24] ;
short arr_7 [24] [24] ;
int arr_9 [16] [16] ;
unsigned int arr_11 [16] ;
int arr_12 [16] ;
int arr_13 [16] ;
unsigned short arr_18 [16] ;
long long int arr_23 [16] [16] [16] [16] ;
int arr_2 [16] ;
unsigned int arr_14 [16] ;
unsigned int arr_24 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2351804215U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 8959095117637011311ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)11205 : (short)24143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 2427031194017584538ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (short)30806;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -1369186713;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 940653487U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -33318857;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -1062996116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64758 : (unsigned short)35082;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -8510504779348551533LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -538823403;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 4154990112U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 2863080488U : 686701840U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
