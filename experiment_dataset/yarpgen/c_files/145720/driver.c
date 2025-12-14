#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18081;
unsigned long long int var_11 = 2338497734471560846ULL;
int zero = 0;
unsigned int var_12 = 1934724518U;
long long int var_13 = 55326615798572690LL;
short var_14 = (short)-24130;
unsigned char var_15 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
