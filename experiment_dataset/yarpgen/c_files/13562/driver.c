#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-127;
unsigned char var_6 = (unsigned char)38;
short var_10 = (short)-28399;
int var_15 = 741656361;
int zero = 0;
unsigned long long int var_18 = 12830730173170679993ULL;
unsigned int var_19 = 3993491446U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
