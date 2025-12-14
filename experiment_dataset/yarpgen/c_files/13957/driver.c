#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
short var_3 = (short)-19537;
int var_7 = -1794736227;
signed char var_8 = (signed char)-26;
short var_10 = (short)-26988;
unsigned int var_13 = 4162227252U;
int zero = 0;
unsigned char var_14 = (unsigned char)154;
unsigned short var_15 = (unsigned short)51108;
signed char var_16 = (signed char)(-127 - 1);
signed char var_17 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
