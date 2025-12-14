#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21103;
unsigned int var_4 = 1735848074U;
unsigned short var_8 = (unsigned short)48571;
unsigned char var_9 = (unsigned char)239;
int zero = 0;
signed char var_14 = (signed char)-97;
unsigned char var_15 = (unsigned char)33;
unsigned char var_16 = (unsigned char)67;
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
