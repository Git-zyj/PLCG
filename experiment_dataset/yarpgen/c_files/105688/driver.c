#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15104;
short var_3 = (short)15;
short var_7 = (short)-14164;
int var_12 = -972714016;
short var_16 = (short)237;
int zero = 0;
int var_17 = -1372696860;
short var_18 = (short)-7597;
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
