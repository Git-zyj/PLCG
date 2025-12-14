#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1866468268;
int var_3 = -29814554;
unsigned int var_4 = 1470747043U;
unsigned int var_9 = 3600389768U;
unsigned int var_10 = 739257482U;
unsigned int var_11 = 1396875202U;
int zero = 0;
unsigned int var_12 = 1670318220U;
unsigned int var_13 = 2614660852U;
int var_14 = -1994829730;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
