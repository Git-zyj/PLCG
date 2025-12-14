#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18476;
unsigned int var_3 = 653058912U;
unsigned short var_7 = (unsigned short)45031;
unsigned int var_8 = 2173693471U;
unsigned int var_9 = 273686182U;
int zero = 0;
short var_15 = (short)-7527;
unsigned int var_16 = 280983397U;
unsigned int var_17 = 2792132667U;
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
