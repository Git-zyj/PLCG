#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1368810967484700729ULL;
unsigned char var_5 = (unsigned char)92;
unsigned long long int var_6 = 13021945861273996141ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)243;
unsigned char var_11 = (unsigned char)179;
unsigned char var_12 = (unsigned char)179;
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
