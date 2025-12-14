#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39257;
unsigned int var_1 = 3556259611U;
long long int var_3 = -2080175203727514560LL;
unsigned char var_4 = (unsigned char)137;
unsigned int var_5 = 425805378U;
unsigned char var_6 = (unsigned char)3;
int var_8 = 513238821;
unsigned long long int var_9 = 426921345413678914ULL;
int var_10 = 1726579487;
unsigned char var_11 = (unsigned char)110;
int var_12 = 2120514064;
int var_13 = 825315506;
int zero = 0;
unsigned int var_14 = 251292150U;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5912257718298956624LL;
int var_17 = -1366160453;
long long int var_18 = -2300756258678222861LL;
unsigned int var_19 = 1135501369U;
unsigned char arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
int arr_3 [11] ;
_Bool arr_4 [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] ;
int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 12902935226088678223ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2123966850;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 16462297174077185795ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 1031756571;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
