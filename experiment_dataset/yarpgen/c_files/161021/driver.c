#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)26205;
short var_8 = (short)-4552;
unsigned long long int var_10 = 3646984607951508846ULL;
int zero = 0;
short var_11 = (short)-14154;
long long int var_12 = -7979297518495061688LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
