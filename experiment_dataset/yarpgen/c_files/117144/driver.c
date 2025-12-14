#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)230;
int var_4 = 1373080323;
unsigned char var_6 = (unsigned char)3;
unsigned char var_10 = (unsigned char)83;
int zero = 0;
unsigned long long int var_11 = 132481123442649436ULL;
int var_12 = -387783493;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
