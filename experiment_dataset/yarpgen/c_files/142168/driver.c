#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29491;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)48150;
unsigned short var_9 = (unsigned short)2621;
unsigned int var_12 = 786571452U;
unsigned int var_15 = 865719623U;
int zero = 0;
signed char var_16 = (signed char)111;
int var_17 = 1892094252;
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
