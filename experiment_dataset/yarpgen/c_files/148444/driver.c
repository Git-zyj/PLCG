#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1538430925;
unsigned long long int var_4 = 18146006333609043232ULL;
unsigned long long int var_6 = 2231737714961707862ULL;
short var_7 = (short)23050;
unsigned int var_8 = 3458392788U;
unsigned int var_10 = 4020051159U;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 2701290686U;
int zero = 0;
unsigned long long int var_17 = 3189644540408220793ULL;
unsigned int var_18 = 1245655515U;
unsigned int var_19 = 2207118457U;
unsigned int var_20 = 1528524557U;
unsigned int var_21 = 741016544U;
unsigned long long int var_22 = 14527286782958701059ULL;
unsigned char var_23 = (unsigned char)130;
unsigned int var_24 = 433376610U;
unsigned long long int var_25 = 8515232668336818395ULL;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-5592 : (short)-12203;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
