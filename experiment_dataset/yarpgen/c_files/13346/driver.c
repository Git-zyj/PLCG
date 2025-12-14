#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19007;
unsigned long long int var_11 = 3617432973202234022ULL;
int zero = 0;
unsigned int var_13 = 2720701783U;
short var_14 = (short)-19313;
signed char var_15 = (signed char)123;
short var_16 = (short)23305;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
