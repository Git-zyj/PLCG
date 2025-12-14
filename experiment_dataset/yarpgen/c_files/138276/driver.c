#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 67115799;
_Bool var_3 = (_Bool)1;
int var_4 = -948443040;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-22270;
int var_9 = -1608375933;
int var_10 = 869593665;
int zero = 0;
unsigned char var_15 = (unsigned char)165;
unsigned char var_16 = (unsigned char)99;
int var_17 = 155503703;
short var_18 = (short)-18253;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
