#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2355393658U;
unsigned short var_3 = (unsigned short)11677;
unsigned short var_5 = (unsigned short)45450;
unsigned short var_7 = (unsigned short)28831;
unsigned short var_10 = (unsigned short)41697;
int zero = 0;
unsigned long long int var_14 = 8233546738649861421ULL;
long long int var_15 = -1213661676848905506LL;
unsigned long long int var_16 = 17502851572328158874ULL;
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
