#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1335568666;
signed char var_5 = (signed char)88;
int var_10 = 1466014867;
int zero = 0;
unsigned char var_11 = (unsigned char)155;
short var_12 = (short)598;
short var_13 = (short)6803;
unsigned long long int var_14 = 6852126598289450686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
