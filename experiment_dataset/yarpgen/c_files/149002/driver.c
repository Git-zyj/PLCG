#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
short var_1 = (short)8871;
int var_3 = -2108376447;
int var_4 = -1120573428;
unsigned long long int var_7 = 11843817812123039088ULL;
short var_14 = (short)-8385;
int zero = 0;
unsigned long long int var_17 = 7316563777580821409ULL;
short var_18 = (short)3553;
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
