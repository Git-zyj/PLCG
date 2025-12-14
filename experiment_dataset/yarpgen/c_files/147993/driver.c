#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2854081716U;
short var_13 = (short)20875;
unsigned char var_14 = (unsigned char)93;
int zero = 0;
unsigned short var_16 = (unsigned short)10887;
short var_17 = (short)-20759;
unsigned char var_18 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
