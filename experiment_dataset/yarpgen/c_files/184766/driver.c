#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21566;
unsigned long long int var_7 = 3523037676019232140ULL;
signed char var_9 = (signed char)100;
unsigned short var_11 = (unsigned short)22919;
int zero = 0;
short var_12 = (short)-10168;
int var_13 = -289873295;
unsigned long long int var_14 = 14699558914149058486ULL;
int var_15 = -25843786;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
