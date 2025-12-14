#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30644;
unsigned long long int var_6 = 7603176175285551369ULL;
unsigned char var_8 = (unsigned char)201;
unsigned long long int var_10 = 4846385228237983671ULL;
signed char var_11 = (signed char)81;
int zero = 0;
unsigned long long int var_13 = 10182579925630258977ULL;
int var_14 = 372452899;
unsigned int var_15 = 2511459956U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
