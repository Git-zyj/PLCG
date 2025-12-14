#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57839;
unsigned char var_8 = (unsigned char)210;
unsigned int var_12 = 4077901813U;
unsigned char var_16 = (unsigned char)249;
unsigned short var_17 = (unsigned short)7861;
unsigned int var_18 = 790180006U;
int zero = 0;
unsigned int var_20 = 486860693U;
unsigned char var_21 = (unsigned char)211;
unsigned short var_22 = (unsigned short)16464;
unsigned int var_23 = 2285366562U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
