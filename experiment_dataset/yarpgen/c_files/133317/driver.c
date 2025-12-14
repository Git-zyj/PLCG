#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 102184961;
unsigned int var_2 = 706444163U;
short var_3 = (short)-16453;
unsigned long long int var_7 = 4620317858697795734ULL;
short var_8 = (short)30804;
unsigned int var_11 = 1288848567U;
int zero = 0;
unsigned char var_12 = (unsigned char)225;
unsigned int var_13 = 328659209U;
short var_14 = (short)-15751;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
