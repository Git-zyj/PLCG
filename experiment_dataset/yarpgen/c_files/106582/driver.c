#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11481576844815446405ULL;
unsigned long long int var_7 = 17736201616416225280ULL;
unsigned short var_8 = (unsigned short)28378;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned long long int var_16 = 14846434235113693747ULL;
void init() {
}

void checksum() {
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
