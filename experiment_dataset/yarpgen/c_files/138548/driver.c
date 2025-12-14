#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
int var_7 = -1388345510;
short var_8 = (short)19347;
int zero = 0;
signed char var_15 = (signed char)76;
unsigned int var_16 = 2506731931U;
short var_17 = (short)-2456;
unsigned short var_18 = (unsigned short)21023;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
