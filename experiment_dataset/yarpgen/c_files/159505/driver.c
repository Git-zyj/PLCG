#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13527;
long long int var_9 = 3668820292488344264LL;
short var_15 = (short)-7480;
long long int var_18 = 2055055541919524218LL;
int zero = 0;
short var_19 = (short)7037;
long long int var_20 = -4482407684538750176LL;
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
