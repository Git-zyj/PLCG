#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2930016206U;
long long int var_8 = -6646014606805851575LL;
int var_11 = 585132704;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3051903405U;
signed char var_15 = (signed char)-53;
unsigned int var_16 = 2103595294U;
unsigned int var_17 = 3460435016U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
