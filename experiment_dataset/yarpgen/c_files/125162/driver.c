#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1441884785;
int var_10 = 1076971745;
unsigned long long int var_13 = 11836186187487225003ULL;
unsigned short var_14 = (unsigned short)51460;
int zero = 0;
long long int var_15 = 8900109788391072030LL;
unsigned char var_16 = (unsigned char)143;
unsigned char var_17 = (unsigned char)186;
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
