#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8973965971655059155ULL;
long long int var_5 = 1251786199308928092LL;
signed char var_8 = (signed char)-86;
unsigned int var_10 = 1491666430U;
int zero = 0;
unsigned char var_14 = (unsigned char)16;
int var_15 = 39104138;
unsigned char var_16 = (unsigned char)132;
unsigned char var_17 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
