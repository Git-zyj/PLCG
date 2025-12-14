#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned char var_3 = (unsigned char)140;
unsigned long long int var_4 = 8108035069413947644ULL;
unsigned char var_5 = (unsigned char)47;
long long int var_8 = 1663993748596641298LL;
int zero = 0;
unsigned int var_16 = 2063644948U;
signed char var_17 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
