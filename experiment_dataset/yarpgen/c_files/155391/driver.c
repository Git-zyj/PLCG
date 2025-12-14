#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9363;
short var_4 = (short)-7371;
unsigned char var_14 = (unsigned char)197;
unsigned long long int var_17 = 11705613501174879339ULL;
int zero = 0;
unsigned int var_19 = 1721604774U;
unsigned long long int var_20 = 2846954544019297004ULL;
unsigned int var_21 = 3375876255U;
int var_22 = -952365809;
unsigned short var_23 = (unsigned short)27258;
unsigned short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)37316;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
