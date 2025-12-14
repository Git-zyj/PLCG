#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1615228363;
short var_7 = (short)2447;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_14 = 495095568;
short var_15 = (short)-24107;
int var_16 = 169382971;
int var_17 = -417548652;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
