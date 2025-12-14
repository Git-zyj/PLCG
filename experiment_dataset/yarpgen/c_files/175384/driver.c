#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3248;
unsigned char var_5 = (unsigned char)210;
unsigned char var_12 = (unsigned char)179;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
int var_14 = 1900519996;
unsigned short var_15 = (unsigned short)397;
unsigned char var_16 = (unsigned char)88;
void init() {
}

void checksum() {
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
