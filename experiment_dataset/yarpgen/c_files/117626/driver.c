#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46753;
unsigned int var_2 = 2553280623U;
short var_7 = (short)1124;
int var_12 = -351264475;
int zero = 0;
signed char var_15 = (signed char)95;
unsigned char var_16 = (unsigned char)205;
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
