#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56793;
unsigned long long int var_8 = 15312604998944134898ULL;
long long int var_11 = 7605467547831671545LL;
int zero = 0;
unsigned long long int var_12 = 16668222765328089444ULL;
unsigned char var_13 = (unsigned char)101;
void init() {
}

void checksum() {
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
