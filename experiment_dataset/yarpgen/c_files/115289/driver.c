#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
signed char var_3 = (signed char)83;
unsigned short var_7 = (unsigned short)7161;
int zero = 0;
unsigned long long int var_10 = 1378220255812565275ULL;
unsigned char var_11 = (unsigned char)124;
int var_12 = 2113267277;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
