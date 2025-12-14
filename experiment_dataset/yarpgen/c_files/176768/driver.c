#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)15546;
unsigned char var_9 = (unsigned char)239;
long long int var_10 = 7725951588959558645LL;
short var_12 = (short)-27910;
signed char var_13 = (signed char)-112;
int zero = 0;
unsigned long long int var_14 = 11307597595037892617ULL;
long long int var_15 = -5202269023904769003LL;
void init() {
}

void checksum() {
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
