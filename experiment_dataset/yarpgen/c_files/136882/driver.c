#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 694209302;
short var_2 = (short)19055;
unsigned int var_4 = 952999017U;
unsigned char var_5 = (unsigned char)147;
long long int var_6 = 3527628472277580352LL;
unsigned char var_8 = (unsigned char)200;
int zero = 0;
short var_10 = (short)29393;
unsigned char var_11 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
