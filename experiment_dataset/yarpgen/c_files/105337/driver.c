#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -116745279;
long long int var_6 = 7929391309137376770LL;
int var_7 = 1710277588;
signed char var_11 = (signed char)62;
unsigned int var_12 = 2548194772U;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned short var_17 = (unsigned short)31383;
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
