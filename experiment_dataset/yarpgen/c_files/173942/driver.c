#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned long long int var_6 = 12340156181549041737ULL;
unsigned int var_11 = 3240369863U;
signed char var_13 = (signed char)114;
unsigned char var_14 = (unsigned char)132;
int zero = 0;
long long int var_20 = -8750800244008238102LL;
unsigned int var_21 = 375305256U;
signed char var_22 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
