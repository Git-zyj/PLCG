#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23162;
unsigned long long int var_4 = 7672806157669042048ULL;
int var_6 = 474940345;
int var_14 = -1892438599;
int zero = 0;
int var_16 = -215440844;
int var_17 = -995289544;
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
