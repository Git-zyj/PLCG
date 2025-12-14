#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18711;
unsigned int var_5 = 2420738049U;
unsigned int var_9 = 2258214303U;
unsigned short var_12 = (unsigned short)18685;
int zero = 0;
short var_14 = (short)18805;
unsigned int var_15 = 648828761U;
unsigned short var_16 = (unsigned short)22804;
unsigned int var_17 = 1572412305U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
