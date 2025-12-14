#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned int var_6 = 2254454616U;
unsigned long long int var_9 = 7176366749142213355ULL;
int zero = 0;
short var_12 = (short)-6131;
long long int var_13 = 9081681299367998668LL;
unsigned long long int var_14 = 14273629909493630458ULL;
signed char var_15 = (signed char)2;
unsigned short var_16 = (unsigned short)12126;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
