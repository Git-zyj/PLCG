#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)238;
unsigned char var_4 = (unsigned char)137;
short var_12 = (short)20376;
long long int var_13 = 2908469668557878516LL;
unsigned int var_16 = 1835463134U;
int zero = 0;
unsigned long long int var_18 = 492178126408274420ULL;
short var_19 = (short)24568;
unsigned long long int var_20 = 173381943838589494ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
