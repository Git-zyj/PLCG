#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -588894283;
int var_3 = -1612388482;
int var_13 = -1563413012;
int var_14 = 1810854459;
int var_15 = -1216761802;
int zero = 0;
int var_17 = 1105274310;
int var_18 = -1505074364;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
