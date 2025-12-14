#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5439315142851341174LL;
int var_12 = 1804322684;
unsigned long long int var_14 = 15977226308932156327ULL;
int zero = 0;
int var_16 = 2055891571;
unsigned char var_17 = (unsigned char)160;
unsigned short var_18 = (unsigned short)27573;
int var_19 = -814331882;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
