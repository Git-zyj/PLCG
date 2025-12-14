#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
signed char var_6 = (signed char)8;
unsigned char var_7 = (unsigned char)216;
short var_11 = (short)4731;
short var_12 = (short)12538;
short var_13 = (short)-17786;
unsigned short var_14 = (unsigned short)43558;
int zero = 0;
unsigned short var_15 = (unsigned short)18082;
signed char var_16 = (signed char)-123;
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
