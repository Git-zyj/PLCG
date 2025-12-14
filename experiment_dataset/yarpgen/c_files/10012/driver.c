#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4078659213U;
unsigned long long int var_2 = 5901783418916158839ULL;
int var_3 = -140789522;
unsigned char var_6 = (unsigned char)144;
short var_7 = (short)7400;
int var_10 = 533797275;
int zero = 0;
unsigned short var_13 = (unsigned short)24054;
unsigned long long int var_14 = 2345508858658818182ULL;
unsigned short var_15 = (unsigned short)43252;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
