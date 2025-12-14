#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21618;
unsigned int var_3 = 225415761U;
unsigned long long int var_5 = 13855338979739864780ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)16;
short var_15 = (short)17741;
short var_16 = (short)11952;
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
