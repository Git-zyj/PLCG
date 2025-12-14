#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4495;
unsigned char var_1 = (unsigned char)112;
unsigned long long int var_10 = 12284451409813043089ULL;
int zero = 0;
unsigned int var_11 = 3788595082U;
short var_12 = (short)9681;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
