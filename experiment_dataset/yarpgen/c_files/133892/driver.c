#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2155629736U;
unsigned short var_7 = (unsigned short)12979;
unsigned int var_12 = 338340637U;
int zero = 0;
long long int var_13 = 3354123137208141135LL;
unsigned short var_14 = (unsigned short)34134;
short var_15 = (short)-12658;
unsigned int var_16 = 1277079998U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
