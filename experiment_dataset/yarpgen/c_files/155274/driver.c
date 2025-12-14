#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1586755761870677633ULL;
unsigned int var_2 = 76237733U;
unsigned char var_8 = (unsigned char)20;
short var_10 = (short)-26402;
unsigned long long int var_13 = 10218038158660788827ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
unsigned long long int var_19 = 1498154557544369954ULL;
void init() {
}

void checksum() {
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
