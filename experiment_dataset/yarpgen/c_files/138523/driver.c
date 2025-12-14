#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6029;
int var_2 = -2052886825;
short var_3 = (short)30743;
short var_4 = (short)7051;
int var_9 = 1492963658;
int zero = 0;
int var_10 = 1184617754;
short var_11 = (short)-6480;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
