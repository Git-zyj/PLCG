#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1859264301;
int var_4 = 405746682;
short var_5 = (short)32546;
int var_7 = 1457055379;
int var_9 = 1697789225;
int zero = 0;
short var_14 = (short)-30634;
short var_15 = (short)-12770;
short var_16 = (short)5560;
void init() {
}

void checksum() {
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
