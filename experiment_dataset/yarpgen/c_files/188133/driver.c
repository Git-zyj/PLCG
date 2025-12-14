#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1255793484U;
int var_7 = 1136572753;
unsigned int var_10 = 2416188920U;
signed char var_16 = (signed char)-9;
unsigned short var_17 = (unsigned short)39906;
int var_18 = -30396073;
int zero = 0;
unsigned short var_19 = (unsigned short)65199;
int var_20 = 1126894989;
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
