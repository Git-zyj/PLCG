#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1699821514U;
unsigned char var_3 = (unsigned char)141;
unsigned short var_4 = (unsigned short)49840;
int var_5 = -1706027432;
unsigned char var_6 = (unsigned char)147;
unsigned char var_11 = (unsigned char)255;
int zero = 0;
int var_12 = 1920383473;
unsigned char var_13 = (unsigned char)196;
short var_14 = (short)-8803;
long long int var_15 = 7712156061153145607LL;
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
