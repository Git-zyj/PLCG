#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)135;
unsigned short var_7 = (unsigned short)18469;
unsigned int var_9 = 4252672237U;
unsigned int var_11 = 1881221425U;
short var_12 = (short)7421;
int zero = 0;
long long int var_13 = 5829606570083016937LL;
unsigned int var_14 = 2057266958U;
unsigned char var_15 = (unsigned char)253;
unsigned int var_16 = 3580725U;
signed char arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-22;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
