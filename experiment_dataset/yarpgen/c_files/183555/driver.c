#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4821031605539252080LL;
long long int var_12 = -820730919920921275LL;
unsigned char var_14 = (unsigned char)71;
long long int var_15 = -2045981535654024125LL;
long long int var_16 = 4745347619859869330LL;
int zero = 0;
unsigned short var_19 = (unsigned short)40587;
long long int var_20 = 2821193533226088135LL;
void init() {
}

void checksum() {
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
