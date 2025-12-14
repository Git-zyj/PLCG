#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
short var_2 = (short)11282;
unsigned char var_8 = (unsigned char)18;
signed char var_10 = (signed char)-122;
int zero = 0;
unsigned short var_15 = (unsigned short)24599;
short var_16 = (short)-13504;
void init() {
}

void checksum() {
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
