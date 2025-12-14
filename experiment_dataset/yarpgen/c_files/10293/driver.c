#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3454144469549454646LL;
long long int var_6 = -6084271915225256689LL;
int var_8 = 1916780620;
unsigned long long int var_9 = 3409183383503209420ULL;
int var_10 = -1969888220;
signed char var_13 = (signed char)-112;
int zero = 0;
unsigned char var_14 = (unsigned char)87;
short var_15 = (short)3125;
unsigned char var_16 = (unsigned char)10;
void init() {
}

void checksum() {
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
