#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5077056755045376611LL;
long long int var_4 = -1925068963941315362LL;
long long int var_5 = 1570200596828256813LL;
int var_6 = 2035548050;
unsigned long long int var_14 = 5577076489418601211ULL;
int zero = 0;
int var_18 = -2099294137;
short var_19 = (short)29085;
unsigned int var_20 = 4201709758U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
