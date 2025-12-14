#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)91;
int var_7 = 876534211;
long long int var_10 = 3266033387928539438LL;
int var_12 = -374325148;
int zero = 0;
int var_14 = 625012597;
unsigned long long int var_15 = 2603760078595622375ULL;
int var_16 = -555813775;
void init() {
}

void checksum() {
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
