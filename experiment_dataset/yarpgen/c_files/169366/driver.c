#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -380626469;
unsigned int var_2 = 3165571543U;
unsigned char var_9 = (unsigned char)168;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 894613212U;
unsigned short var_16 = (unsigned short)59511;
short var_17 = (short)-16504;
short var_18 = (short)-13174;
unsigned int var_19 = 3809248256U;
unsigned long long int var_20 = 10231152704514034434ULL;
unsigned short arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)63733 : (unsigned short)3115;
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
