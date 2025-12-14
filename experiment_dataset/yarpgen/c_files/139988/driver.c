#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)141;
unsigned char var_5 = (unsigned char)166;
long long int var_6 = -1599223593869559035LL;
long long int var_8 = -6884115649114834726LL;
int var_9 = 778959459;
short var_12 = (short)12482;
int var_13 = -1648850613;
int zero = 0;
short var_17 = (short)-1712;
unsigned char var_18 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
