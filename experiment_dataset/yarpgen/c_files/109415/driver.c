#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56997;
int var_3 = 994049695;
unsigned short var_4 = (unsigned short)51981;
signed char var_5 = (signed char)43;
short var_8 = (short)-25035;
int zero = 0;
short var_12 = (short)-23314;
unsigned char var_13 = (unsigned char)182;
short var_14 = (short)-3474;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
