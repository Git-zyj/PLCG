#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21855;
unsigned short var_1 = (unsigned short)49916;
int var_5 = 1125320451;
short var_9 = (short)16658;
unsigned char var_12 = (unsigned char)49;
short var_13 = (short)5487;
int zero = 0;
short var_16 = (short)-31927;
unsigned short var_17 = (unsigned short)7315;
void init() {
}

void checksum() {
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
