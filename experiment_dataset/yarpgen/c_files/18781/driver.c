#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)39;
unsigned char var_10 = (unsigned char)213;
int var_12 = 927303477;
short var_13 = (short)-32432;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
unsigned long long int var_16 = 194806207157057283ULL;
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
