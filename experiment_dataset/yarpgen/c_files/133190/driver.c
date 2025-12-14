#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19207;
int var_4 = -262173113;
unsigned short var_8 = (unsigned short)54616;
int zero = 0;
unsigned long long int var_17 = 15419315156884975882ULL;
short var_18 = (short)-282;
unsigned long long int var_19 = 18280429958199429713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
