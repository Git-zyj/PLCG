#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1257857879695510085LL;
unsigned long long int var_5 = 7644513634748188348ULL;
unsigned int var_8 = 358753784U;
int var_9 = 2031699082;
unsigned char var_12 = (unsigned char)37;
int zero = 0;
short var_14 = (short)14318;
long long int var_15 = -176282299783620997LL;
int var_16 = -1847069111;
signed char var_17 = (signed char)-125;
long long int var_18 = -3736349888722517263LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
