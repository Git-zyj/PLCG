#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8838590001647400568ULL;
unsigned int var_2 = 1682977979U;
unsigned int var_9 = 2241460165U;
int zero = 0;
short var_12 = (short)-30445;
unsigned short var_13 = (unsigned short)26573;
int var_14 = -1825944051;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
