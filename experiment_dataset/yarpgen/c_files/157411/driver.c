#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 30226097;
unsigned long long int var_4 = 1926336073277827514ULL;
unsigned short var_5 = (unsigned short)31192;
int var_11 = 954589953;
unsigned long long int var_13 = 10593073378853472618ULL;
long long int var_15 = -9153622416007001072LL;
int zero = 0;
unsigned int var_16 = 1912860543U;
unsigned char var_17 = (unsigned char)160;
unsigned short var_18 = (unsigned short)55207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
