#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned int var_3 = 2010366079U;
unsigned short var_11 = (unsigned short)33780;
unsigned short var_13 = (unsigned short)6704;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
unsigned short var_17 = (unsigned short)21759;
unsigned short var_18 = (unsigned short)30717;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
