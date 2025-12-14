#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2613794305U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1293963159U;
unsigned long long int var_5 = 17945681921089677509ULL;
unsigned int var_6 = 1913369426U;
signed char var_7 = (signed char)40;
short var_8 = (short)30659;
signed char var_10 = (signed char)62;
unsigned int var_12 = 997661327U;
unsigned int var_13 = 2065063857U;
unsigned short var_15 = (unsigned short)28933;
unsigned long long int var_18 = 15039475118736150142ULL;
int zero = 0;
signed char var_19 = (signed char)-108;
unsigned long long int var_20 = 13888218855733676048ULL;
signed char var_21 = (signed char)107;
unsigned char var_22 = (unsigned char)28;
int var_23 = 1543871358;
unsigned long long int var_24 = 11627398132227825195ULL;
signed char var_25 = (signed char)-82;
unsigned int arr_1 [19] [19] ;
int arr_2 [19] [19] ;
_Bool arr_4 [11] ;
long long int arr_8 [23] ;
unsigned int arr_3 [19] [19] ;
_Bool arr_7 [11] ;
unsigned int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3934812460U : 1110647078U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 180924821;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3814270838880501431LL : 7809802866464258880LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3756457271U : 1090843086U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 2879921373U : 1513165999U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
