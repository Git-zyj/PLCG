#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29233;
unsigned char var_4 = (unsigned char)245;
signed char var_5 = (signed char)18;
unsigned short var_10 = (unsigned short)635;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
int var_15 = 2037034580;
unsigned short var_16 = (unsigned short)22510;
int var_17 = -255184988;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
