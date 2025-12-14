#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12053;
signed char var_5 = (signed char)35;
unsigned int var_8 = 3566103223U;
unsigned short var_11 = (unsigned short)59179;
int var_12 = -1991393364;
unsigned int var_14 = 4073889175U;
int zero = 0;
short var_17 = (short)-16034;
short var_18 = (short)25981;
void init() {
}

void checksum() {
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
