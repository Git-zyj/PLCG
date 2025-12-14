#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54833;
unsigned int var_1 = 1916876993U;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2400438326979893594LL;
unsigned char var_7 = (unsigned char)93;
unsigned int var_9 = 2108897759U;
short var_11 = (short)22397;
int zero = 0;
short var_13 = (short)-9442;
long long int var_14 = -2962723676125400857LL;
int var_15 = -558309009;
unsigned short var_16 = (unsigned short)77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
