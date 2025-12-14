#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
short var_4 = (short)-9599;
unsigned short var_5 = (unsigned short)63903;
short var_6 = (short)-29387;
unsigned long long int var_7 = 14764632700912114466ULL;
signed char var_8 = (signed char)55;
unsigned int var_9 = 2518625601U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2927663290U;
unsigned short var_12 = (unsigned short)7941;
unsigned short var_13 = (unsigned short)38925;
unsigned short var_14 = (unsigned short)64538;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
