#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24194;
unsigned char var_4 = (unsigned char)47;
long long int var_10 = 2350001213253625039LL;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
unsigned long long int var_12 = 15633581660946407503ULL;
unsigned long long int var_13 = 1382794292530647901ULL;
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
