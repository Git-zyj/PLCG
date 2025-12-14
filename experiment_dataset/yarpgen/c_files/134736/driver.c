#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
short var_5 = (short)-5783;
long long int var_14 = 7494521181535793218LL;
unsigned short var_17 = (unsigned short)14597;
unsigned long long int var_18 = 16476848807508923944ULL;
int zero = 0;
unsigned int var_20 = 802018637U;
long long int var_21 = -2200684739609937529LL;
short var_22 = (short)-26730;
unsigned long long int var_23 = 3706767903233235692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
