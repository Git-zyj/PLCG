#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)83;
unsigned char var_5 = (unsigned char)218;
unsigned char var_7 = (unsigned char)102;
int zero = 0;
int var_10 = 1418418298;
long long int var_11 = -2585676413729719063LL;
unsigned char var_12 = (unsigned char)84;
int var_13 = 870105142;
unsigned long long int var_14 = 3416346032237875924ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
