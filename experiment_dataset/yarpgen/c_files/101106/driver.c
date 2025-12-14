#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5112705806120866488ULL;
unsigned char var_4 = (unsigned char)160;
unsigned char var_5 = (unsigned char)109;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
unsigned int var_11 = 861228894U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
