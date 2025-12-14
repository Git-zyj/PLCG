#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 146099328;
unsigned long long int var_2 = 6515163603183474075ULL;
unsigned char var_9 = (unsigned char)252;
unsigned int var_11 = 1943557798U;
unsigned short var_12 = (unsigned short)41832;
short var_14 = (short)19977;
int zero = 0;
unsigned short var_15 = (unsigned short)60674;
unsigned short var_16 = (unsigned short)35481;
int var_17 = 1279482770;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
