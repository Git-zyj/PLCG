#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22395;
unsigned char var_11 = (unsigned char)210;
unsigned short var_15 = (unsigned short)17761;
int zero = 0;
unsigned short var_19 = (unsigned short)56826;
unsigned short var_20 = (unsigned short)24473;
unsigned long long int var_21 = 10283390773935542544ULL;
short var_22 = (short)-23903;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
