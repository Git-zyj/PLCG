#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33643;
unsigned int var_3 = 3938461554U;
unsigned short var_7 = (unsigned short)56889;
unsigned short var_11 = (unsigned short)2619;
int zero = 0;
unsigned int var_12 = 2899298896U;
unsigned short var_13 = (unsigned short)14126;
unsigned short var_14 = (unsigned short)45531;
unsigned short var_15 = (unsigned short)34339;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
