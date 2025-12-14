#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)2335;
unsigned long long int var_15 = 8211150151734531402ULL;
int zero = 0;
unsigned long long int var_20 = 6824807320788273173ULL;
unsigned char var_21 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
