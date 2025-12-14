#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2440;
unsigned char var_5 = (unsigned char)135;
unsigned int var_6 = 367259563U;
short var_7 = (short)21802;
unsigned short var_10 = (unsigned short)21780;
int zero = 0;
int var_14 = -398604118;
unsigned int var_15 = 3305409228U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
