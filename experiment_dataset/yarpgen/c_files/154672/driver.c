#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47274;
long long int var_6 = 3091766092684486821LL;
long long int var_8 = 1221267893845176625LL;
int zero = 0;
unsigned short var_13 = (unsigned short)64751;
unsigned short var_14 = (unsigned short)39745;
void init() {
}

void checksum() {
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
