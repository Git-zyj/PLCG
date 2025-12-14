#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1928566995;
unsigned char var_3 = (unsigned char)95;
unsigned short var_4 = (unsigned short)21309;
short var_6 = (short)-32469;
int var_11 = -2099961145;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-104;
int zero = 0;
short var_15 = (short)-16747;
unsigned int var_16 = 2595796853U;
unsigned long long int var_17 = 6588158195483187679ULL;
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
