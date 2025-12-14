#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8636;
long long int var_1 = -8874099484815985787LL;
long long int var_3 = 5467276253701433436LL;
short var_4 = (short)20128;
short var_8 = (short)-10598;
short var_15 = (short)-21481;
int zero = 0;
unsigned short var_16 = (unsigned short)9078;
short var_17 = (short)25552;
short var_18 = (short)7266;
short var_19 = (short)11624;
short var_20 = (short)17886;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
