#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 754087920;
signed char var_4 = (signed char)74;
unsigned int var_6 = 1872501051U;
int var_8 = 217329149;
unsigned char var_9 = (unsigned char)161;
unsigned long long int var_12 = 8488965648287358204ULL;
unsigned int var_13 = 3862721192U;
int var_14 = -445014501;
int zero = 0;
short var_15 = (short)1001;
short var_16 = (short)30981;
unsigned int var_17 = 1991980555U;
short var_18 = (short)817;
unsigned short var_19 = (unsigned short)6761;
unsigned short var_20 = (unsigned short)9611;
short arr_0 [15] ;
short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-8141;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-32623;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
