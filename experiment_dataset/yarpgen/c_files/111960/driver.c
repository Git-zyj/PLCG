#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
_Bool var_1 = (_Bool)0;
int var_3 = 562031954;
unsigned long long int var_4 = 3595584724447680450ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -586449870;
short var_7 = (short)-5607;
unsigned short var_8 = (unsigned short)62915;
unsigned char var_10 = (unsigned char)67;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 1333509437;
_Bool var_13 = (_Bool)0;
int var_14 = 1361300689;
int var_15 = 1456523398;
unsigned int var_16 = 1942523568U;
unsigned long long int var_17 = 11423457074863414446ULL;
long long int var_18 = 6277520622321366484LL;
int var_19 = -621806780;
short var_20 = (short)-3582;
unsigned short arr_5 [12] [12] ;
unsigned int arr_6 [12] [12] [12] ;
unsigned char arr_8 [21] ;
unsigned int arr_9 [21] ;
_Bool arr_10 [21] [21] ;
unsigned int arr_11 [21] ;
unsigned int arr_13 [14] ;
short arr_14 [14] ;
unsigned long long int arr_15 [14] ;
int arr_17 [16] ;
int arr_21 [14] [14] ;
unsigned short arr_12 [21] ;
unsigned int arr_16 [14] ;
signed char arr_19 [16] [16] ;
long long int arr_23 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)5193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4167188236U : 3353470279U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2628650390U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 1829078151U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 1026585009U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (short)9928;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 7195409161661345676ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 53433052;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = 1148888633;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)46744;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 108019403U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = -1187775783126762385LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
