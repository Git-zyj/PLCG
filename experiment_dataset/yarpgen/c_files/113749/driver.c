#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1367483428;
int var_6 = -903041148;
int var_7 = -1667312919;
unsigned char var_11 = (unsigned char)9;
int var_14 = 249906042;
int zero = 0;
int var_16 = -2075985677;
unsigned char var_17 = (unsigned char)253;
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
