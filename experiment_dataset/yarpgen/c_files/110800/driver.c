#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 710978844601099824LL;
signed char var_5 = (signed char)56;
int var_6 = 1335847618;
short var_7 = (short)21781;
unsigned int var_9 = 3805790308U;
int zero = 0;
unsigned short var_10 = (unsigned short)22799;
unsigned int var_11 = 1767128535U;
unsigned long long int var_12 = 5636467954206522663ULL;
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
