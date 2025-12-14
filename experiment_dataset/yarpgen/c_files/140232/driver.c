#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1602702519U;
unsigned short var_5 = (unsigned short)10246;
unsigned short var_11 = (unsigned short)47600;
short var_13 = (short)-7582;
unsigned char var_16 = (unsigned char)165;
int var_17 = -989952316;
int zero = 0;
short var_20 = (short)-15891;
unsigned short var_21 = (unsigned short)59971;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
