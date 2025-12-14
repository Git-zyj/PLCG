#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12445448876173257301ULL;
unsigned long long int var_4 = 18319423234055240546ULL;
short var_8 = (short)-16601;
unsigned char var_10 = (unsigned char)136;
long long int var_13 = -7447260227580498106LL;
int zero = 0;
signed char var_14 = (signed char)35;
short var_15 = (short)-26959;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
