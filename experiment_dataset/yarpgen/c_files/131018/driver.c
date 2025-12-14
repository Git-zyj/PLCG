#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7210171176810236209LL;
long long int var_7 = -3883686616465720770LL;
unsigned int var_8 = 1904231984U;
int zero = 0;
unsigned short var_15 = (unsigned short)12103;
unsigned short var_16 = (unsigned short)11861;
unsigned long long int var_17 = 5360281729546377622ULL;
unsigned long long int var_18 = 2799573161765991727ULL;
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
