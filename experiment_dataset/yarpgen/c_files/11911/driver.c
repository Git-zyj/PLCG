#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1066281380U;
short var_2 = (short)-18975;
short var_4 = (short)21941;
unsigned long long int var_6 = 18095629249550937823ULL;
_Bool var_13 = (_Bool)0;
int var_15 = -829835204;
int zero = 0;
unsigned long long int var_16 = 11802315817877035494ULL;
short var_17 = (short)-10417;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
