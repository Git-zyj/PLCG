#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)218;
short var_12 = (short)-6585;
long long int var_17 = 8441251319253239619LL;
unsigned short var_19 = (unsigned short)36685;
int zero = 0;
long long int var_20 = -4046524677020870401LL;
signed char var_21 = (signed char)19;
signed char var_22 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
