#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1587541025U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_10 = (short)-14761;
long long int var_11 = -2136381881586620981LL;
long long int var_12 = -1083126656766842127LL;
int zero = 0;
unsigned char var_13 = (unsigned char)128;
short var_14 = (short)-31603;
void init() {
}

void checksum() {
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
