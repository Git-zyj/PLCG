#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 197169868;
short var_9 = (short)-14876;
int var_11 = 1727126602;
int zero = 0;
unsigned char var_16 = (unsigned char)227;
long long int var_17 = -2704892909318379552LL;
int var_18 = -1780182033;
unsigned int var_19 = 1601354983U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
