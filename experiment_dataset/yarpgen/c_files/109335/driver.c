#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-39;
unsigned int var_2 = 1860901837U;
unsigned int var_6 = 2435814591U;
short var_7 = (short)-18052;
unsigned int var_8 = 2896185018U;
short var_9 = (short)2971;
int zero = 0;
short var_15 = (short)21753;
unsigned int var_16 = 2120530781U;
short var_17 = (short)-19514;
int var_18 = 1832943616;
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
