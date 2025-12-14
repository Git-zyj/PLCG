#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10255982767023454880ULL;
unsigned char var_5 = (unsigned char)83;
unsigned long long int var_11 = 2276174533225755456ULL;
int zero = 0;
int var_15 = -778437379;
unsigned int var_16 = 1488816602U;
unsigned long long int var_17 = 12516616032787328849ULL;
void init() {
}

void checksum() {
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
