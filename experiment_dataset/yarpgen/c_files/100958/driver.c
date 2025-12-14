#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1821435874;
unsigned char var_1 = (unsigned char)92;
unsigned char var_6 = (unsigned char)79;
unsigned short var_9 = (unsigned short)38467;
unsigned int var_10 = 2319438134U;
signed char var_11 = (signed char)-35;
signed char var_12 = (signed char)126;
unsigned short var_13 = (unsigned short)30774;
long long int var_17 = 1530728897505639467LL;
unsigned short var_18 = (unsigned short)3769;
unsigned char var_19 = (unsigned char)113;
int zero = 0;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 482477288U;
short var_22 = (short)-635;
int var_23 = -492755024;
unsigned char var_24 = (unsigned char)57;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)51085;
unsigned short var_27 = (unsigned short)8849;
unsigned short var_28 = (unsigned short)47378;
int var_29 = 231456359;
unsigned char var_30 = (unsigned char)12;
int var_31 = -552722369;
unsigned char var_32 = (unsigned char)160;
unsigned short arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
unsigned short arr_5 [14] ;
signed char arr_10 [24] ;
_Bool arr_11 [24] ;
signed char arr_21 [12] [12] [12] ;
signed char arr_23 [12] [12] [12] [12] ;
unsigned long long int arr_2 [14] [14] ;
short arr_13 [24] [24] ;
unsigned long long int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)48609;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40195;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)1476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 14347841259655525993ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-8508;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 1611714507545949523ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
