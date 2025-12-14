#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 845834701943114873LL;
short var_8 = (short)-28687;
unsigned short var_11 = (unsigned short)48021;
int var_14 = 1903426899;
int zero = 0;
unsigned short var_15 = (unsigned short)17089;
unsigned int var_16 = 1883096902U;
unsigned char var_17 = (unsigned char)209;
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
