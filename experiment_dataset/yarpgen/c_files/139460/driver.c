#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -508199378999385256LL;
unsigned int var_5 = 1865323284U;
long long int var_6 = 4868358282529396540LL;
unsigned int var_8 = 3089899556U;
int zero = 0;
unsigned short var_16 = (unsigned short)17108;
long long int var_17 = 8022493773508461927LL;
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
