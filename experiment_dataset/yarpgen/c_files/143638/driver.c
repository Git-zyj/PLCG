#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2010648753U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2611614859U;
short var_11 = (short)-1449;
unsigned char var_12 = (unsigned char)144;
int var_14 = -1279784548;
int zero = 0;
unsigned int var_15 = 602720672U;
unsigned short var_16 = (unsigned short)31845;
long long int var_17 = 3877459656805185660LL;
unsigned long long int var_18 = 9557732949541491584ULL;
unsigned char var_19 = (unsigned char)237;
unsigned int var_20 = 3367953016U;
unsigned char arr_0 [15] ;
long long int arr_4 [12] ;
_Bool arr_5 [21] ;
int arr_8 [21] [21] ;
unsigned char arr_9 [21] ;
short arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -733081053431241252LL : 6315350961143814334LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 728594918;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)24461;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
