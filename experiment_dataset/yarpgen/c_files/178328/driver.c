#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12149;
unsigned int var_7 = 3957697205U;
short var_9 = (short)32030;
unsigned char var_11 = (unsigned char)144;
int zero = 0;
short var_16 = (short)-187;
short var_17 = (short)22991;
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
