#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
unsigned int var_11 = 2237778195U;
signed char var_12 = (signed char)74;
unsigned int var_13 = 3312832596U;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
unsigned char var_21 = (unsigned char)168;
signed char var_22 = (signed char)-67;
unsigned int var_23 = 2406317438U;
unsigned int var_24 = 2192714760U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
