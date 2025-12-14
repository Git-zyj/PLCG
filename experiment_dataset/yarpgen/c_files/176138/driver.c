#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32550;
short var_6 = (short)31002;
signed char var_7 = (signed char)-50;
short var_9 = (short)-9428;
short var_12 = (short)-22895;
int zero = 0;
short var_14 = (short)-32442;
short var_15 = (short)-6112;
void init() {
}

void checksum() {
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
