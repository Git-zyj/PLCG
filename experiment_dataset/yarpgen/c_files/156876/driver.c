#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1184074997;
int var_4 = 681521929;
int var_7 = 1087291736;
unsigned long long int var_9 = 1936122905500386586ULL;
unsigned long long int var_11 = 15464365404548827689ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)31705;
unsigned long long int var_13 = 12439413166266384804ULL;
int var_14 = 1426999480;
unsigned int var_15 = 617552755U;
unsigned long long int var_16 = 9012370758242779616ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
