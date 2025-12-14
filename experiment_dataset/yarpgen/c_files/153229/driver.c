#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)124;
unsigned int var_8 = 1665766825U;
unsigned long long int var_13 = 10701982640573625086ULL;
int zero = 0;
signed char var_15 = (signed char)-97;
unsigned char var_16 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
