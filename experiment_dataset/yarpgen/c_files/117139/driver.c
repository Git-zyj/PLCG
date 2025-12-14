#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)41;
unsigned short var_12 = (unsigned short)54517;
short var_13 = (short)-22441;
int zero = 0;
int var_15 = -120059135;
unsigned short var_16 = (unsigned short)17125;
unsigned short var_17 = (unsigned short)22329;
void init() {
}

void checksum() {
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
