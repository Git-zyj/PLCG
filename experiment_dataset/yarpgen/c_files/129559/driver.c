#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29647;
unsigned long long int var_2 = 8450499066293270686ULL;
unsigned int var_14 = 1401552680U;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
signed char var_19 = (signed char)121;
signed char var_20 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
