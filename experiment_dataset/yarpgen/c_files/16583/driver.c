#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9032006271571732727ULL;
int var_3 = 545039495;
long long int var_5 = 1464859240023399171LL;
unsigned long long int var_11 = 10983618454907198812ULL;
int zero = 0;
short var_12 = (short)24693;
int var_13 = 1940375027;
unsigned short var_14 = (unsigned short)16535;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
