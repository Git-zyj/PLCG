#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2762798930U;
unsigned char var_3 = (unsigned char)76;
signed char var_7 = (signed char)38;
unsigned short var_8 = (unsigned short)44834;
int var_10 = 1067364780;
int zero = 0;
unsigned int var_11 = 2396048405U;
short var_12 = (short)30497;
unsigned short var_13 = (unsigned short)65339;
int var_14 = -2051838375;
unsigned short var_15 = (unsigned short)38995;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
