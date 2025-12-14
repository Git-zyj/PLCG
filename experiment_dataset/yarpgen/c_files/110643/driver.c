#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned short var_2 = (unsigned short)61610;
long long int var_11 = 4087982846656454395LL;
int zero = 0;
unsigned long long int var_14 = 6213987027904994692ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 562591005597385146LL;
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
