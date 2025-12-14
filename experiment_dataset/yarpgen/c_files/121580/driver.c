#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-8038;
long long int var_11 = 7987015200021271849LL;
long long int var_12 = -1692741641921866584LL;
unsigned char var_13 = (unsigned char)4;
signed char var_14 = (signed char)118;
int zero = 0;
long long int var_16 = -1364908077154618117LL;
long long int var_17 = 4945966685285925429LL;
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
