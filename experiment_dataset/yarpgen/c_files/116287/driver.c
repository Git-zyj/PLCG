#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6689398804408380697ULL;
unsigned long long int var_5 = 5882047818758674943ULL;
signed char var_7 = (signed char)-36;
unsigned int var_8 = 4086041631U;
int zero = 0;
unsigned char var_10 = (unsigned char)102;
signed char var_11 = (signed char)-83;
unsigned long long int var_12 = 11288533738713516806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
