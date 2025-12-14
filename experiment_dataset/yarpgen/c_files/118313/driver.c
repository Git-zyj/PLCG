#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28028;
unsigned char var_8 = (unsigned char)84;
short var_12 = (short)6778;
int zero = 0;
short var_13 = (short)9478;
short var_14 = (short)-4043;
unsigned char var_15 = (unsigned char)131;
unsigned char var_16 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
