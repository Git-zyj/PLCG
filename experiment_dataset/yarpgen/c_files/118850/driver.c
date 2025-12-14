#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2237;
unsigned char var_3 = (unsigned char)114;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)75;
int zero = 0;
unsigned short var_10 = (unsigned short)3606;
_Bool var_11 = (_Bool)0;
long long int var_12 = -5637224915611439193LL;
long long int var_13 = 4083104734681115992LL;
short var_14 = (short)11075;
int arr_0 [23] [23] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_5 [23] ;
int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1313890622;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3103026053938562346ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 9374401340013836644ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1384697575 : 2010094477;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
