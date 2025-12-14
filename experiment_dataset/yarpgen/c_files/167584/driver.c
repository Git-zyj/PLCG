#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -653693847;
long long int var_11 = -1928412684842105300LL;
signed char var_15 = (signed char)-91;
int var_16 = 259852767;
unsigned int var_17 = 3302703138U;
int zero = 0;
unsigned int var_19 = 1041038901U;
unsigned char var_20 = (unsigned char)65;
unsigned int var_21 = 493701936U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
