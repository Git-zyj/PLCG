#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1933141201;
unsigned char var_11 = (unsigned char)219;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)23103;
unsigned long long int var_17 = 12312656959052341944ULL;
short var_18 = (short)-24639;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
