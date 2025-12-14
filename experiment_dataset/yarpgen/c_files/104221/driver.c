#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2470039657U;
long long int var_6 = 8893803718359345172LL;
int var_11 = 1976566194;
signed char var_12 = (signed char)9;
unsigned char var_14 = (unsigned char)189;
int zero = 0;
unsigned int var_17 = 2316249564U;
int var_18 = -130310074;
void init() {
}

void checksum() {
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
