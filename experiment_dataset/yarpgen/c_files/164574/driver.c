#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned long long int var_1 = 6656244136823559678ULL;
unsigned short var_4 = (unsigned short)44554;
unsigned long long int var_8 = 9228723540749955886ULL;
short var_14 = (short)-7730;
int zero = 0;
unsigned int var_15 = 2106008792U;
short var_16 = (short)21870;
signed char var_17 = (signed char)80;
unsigned char var_18 = (unsigned char)133;
unsigned short var_19 = (unsigned short)51815;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
