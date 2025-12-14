#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 13406335536714428207ULL;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
unsigned long long int var_17 = 2634279604742986476ULL;
short var_18 = (short)100;
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
