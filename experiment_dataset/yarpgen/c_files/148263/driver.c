#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35793;
unsigned long long int var_9 = 629098207470876144ULL;
unsigned char var_10 = (unsigned char)37;
unsigned long long int var_12 = 3722348432685601931ULL;
unsigned long long int var_13 = 11776364853333756225ULL;
int zero = 0;
unsigned int var_16 = 3367740137U;
int var_17 = 1694292995;
void init() {
}

void checksum() {
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
