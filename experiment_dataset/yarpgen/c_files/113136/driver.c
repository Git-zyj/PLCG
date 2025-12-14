#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-75;
short var_4 = (short)-1531;
unsigned char var_7 = (unsigned char)76;
unsigned char var_8 = (unsigned char)46;
unsigned long long int var_10 = 16406275581872807318ULL;
int var_12 = -2019696441;
int zero = 0;
unsigned long long int var_15 = 6704298849033333854ULL;
unsigned int var_16 = 204532959U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
