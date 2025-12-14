#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4185035205U;
unsigned short var_9 = (unsigned short)51196;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-21828;
unsigned int var_14 = 1452414620U;
int zero = 0;
unsigned short var_16 = (unsigned short)42065;
short var_17 = (short)-6115;
void init() {
}

void checksum() {
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
