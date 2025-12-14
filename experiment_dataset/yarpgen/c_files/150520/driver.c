#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
int var_2 = -1453061017;
int var_3 = 977586711;
unsigned int var_4 = 32139540U;
unsigned short var_15 = (unsigned short)46445;
unsigned short var_18 = (unsigned short)51848;
int zero = 0;
signed char var_19 = (signed char)43;
int var_20 = -1872236298;
unsigned short var_21 = (unsigned short)23443;
signed char var_22 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
