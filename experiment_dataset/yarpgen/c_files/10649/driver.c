#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1948472429;
unsigned int var_4 = 1140396866U;
unsigned long long int var_6 = 8629909900885141686ULL;
unsigned int var_7 = 721778725U;
unsigned long long int var_10 = 15125747794014276238ULL;
int zero = 0;
unsigned int var_11 = 4093128207U;
long long int var_12 = -521430956014380234LL;
unsigned short var_13 = (unsigned short)8704;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
