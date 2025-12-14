#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1625632751U;
unsigned short var_4 = (unsigned short)4053;
short var_15 = (short)-17055;
int zero = 0;
signed char var_19 = (signed char)8;
unsigned char var_20 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
