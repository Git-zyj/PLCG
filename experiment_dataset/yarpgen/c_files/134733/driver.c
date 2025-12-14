#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16806157040824251024ULL;
short var_1 = (short)-9745;
short var_2 = (short)-19384;
long long int var_9 = 1378450951491174986LL;
unsigned short var_10 = (unsigned short)19588;
int zero = 0;
short var_11 = (short)410;
int var_12 = 183532805;
void init() {
}

void checksum() {
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
