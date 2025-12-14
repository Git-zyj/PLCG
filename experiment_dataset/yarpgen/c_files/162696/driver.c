#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 5767935582547180899ULL;
short var_11 = (short)3284;
unsigned short var_14 = (unsigned short)2320;
int zero = 0;
unsigned int var_15 = 392647167U;
unsigned char var_16 = (unsigned char)90;
void init() {
}

void checksum() {
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
