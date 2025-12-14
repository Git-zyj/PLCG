#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17144320171404922320ULL;
short var_7 = (short)-22539;
unsigned char var_9 = (unsigned char)24;
int zero = 0;
signed char var_10 = (signed char)112;
short var_11 = (short)917;
unsigned short var_12 = (unsigned short)52042;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
