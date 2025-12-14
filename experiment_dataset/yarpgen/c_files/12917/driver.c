#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29723;
unsigned char var_4 = (unsigned char)129;
unsigned short var_5 = (unsigned short)36024;
short var_9 = (short)-14794;
unsigned long long int var_11 = 1554502407160049883ULL;
unsigned int var_12 = 549606782U;
unsigned char var_14 = (unsigned char)137;
int zero = 0;
unsigned short var_16 = (unsigned short)4710;
signed char var_17 = (signed char)32;
short var_18 = (short)22981;
short var_19 = (short)7506;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
