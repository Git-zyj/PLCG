#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26477;
unsigned char var_4 = (unsigned char)237;
int zero = 0;
unsigned char var_10 = (unsigned char)211;
unsigned long long int var_11 = 307154607930562562ULL;
unsigned long long int var_12 = 17481775564576331021ULL;
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
