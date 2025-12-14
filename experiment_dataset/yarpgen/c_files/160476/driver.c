#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2138127030U;
signed char var_5 = (signed char)90;
int var_8 = 1962987691;
int var_12 = -1442757480;
unsigned char var_13 = (unsigned char)51;
unsigned long long int var_14 = 16675404444055053258ULL;
unsigned long long int var_15 = 1648462058715442042ULL;
int zero = 0;
unsigned long long int var_20 = 14542778173803459543ULL;
short var_21 = (short)-14678;
long long int var_22 = 9007634596505687577LL;
unsigned int var_23 = 1031517194U;
void init() {
}

void checksum() {
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
