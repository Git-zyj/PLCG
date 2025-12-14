#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)196;
int var_10 = 1437621765;
int var_11 = 131556766;
unsigned char var_13 = (unsigned char)45;
int var_14 = -1656265112;
int var_15 = 270228302;
int zero = 0;
int var_17 = -1873635046;
int var_18 = -1757249544;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
