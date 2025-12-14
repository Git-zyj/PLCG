#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8993467920024257622LL;
unsigned char var_7 = (unsigned char)30;
unsigned short var_9 = (unsigned short)30343;
short var_11 = (short)25021;
short var_12 = (short)16084;
long long int var_14 = -2462384161507368224LL;
long long int var_15 = 4388885979247569345LL;
int zero = 0;
unsigned long long int var_17 = 11808083227027242509ULL;
int var_18 = -1106266376;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
