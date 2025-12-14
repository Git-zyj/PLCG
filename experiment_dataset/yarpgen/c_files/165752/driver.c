#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 298143751186854090LL;
short var_1 = (short)21041;
unsigned char var_5 = (unsigned char)198;
short var_7 = (short)-14689;
int zero = 0;
short var_12 = (short)29329;
unsigned char var_13 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
