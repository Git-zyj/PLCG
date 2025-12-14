#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18423504193608773032ULL;
long long int var_11 = 4869880283997387014LL;
int var_12 = -400078271;
unsigned short var_13 = (unsigned short)50733;
unsigned int var_14 = 3280058974U;
int zero = 0;
unsigned int var_16 = 1329130535U;
unsigned long long int var_17 = 13815271383836760002ULL;
unsigned char var_18 = (unsigned char)139;
long long int var_19 = 2438158465125735814LL;
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
