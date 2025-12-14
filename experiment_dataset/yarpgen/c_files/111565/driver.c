#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3791287792U;
unsigned char var_4 = (unsigned char)157;
signed char var_8 = (signed char)-122;
unsigned long long int var_10 = 9639157001154013930ULL;
int zero = 0;
unsigned int var_13 = 3495461316U;
short var_14 = (short)-23651;
void init() {
}

void checksum() {
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
