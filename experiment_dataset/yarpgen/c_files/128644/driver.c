#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1586263279U;
unsigned long long int var_4 = 8158149649634057762ULL;
unsigned int var_7 = 2001109646U;
unsigned long long int var_8 = 14735321322503791083ULL;
int var_9 = 1940174341;
int zero = 0;
unsigned char var_11 = (unsigned char)0;
short var_12 = (short)-1782;
unsigned char var_13 = (unsigned char)17;
int var_14 = -2118843336;
unsigned int var_15 = 4068683076U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
