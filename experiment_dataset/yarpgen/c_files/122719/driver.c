#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1916233654;
short var_6 = (short)-30639;
unsigned short var_10 = (unsigned short)3780;
long long int var_11 = -8558413212799934470LL;
long long int var_12 = -2530711145835134972LL;
int zero = 0;
unsigned int var_13 = 3809859460U;
signed char var_14 = (signed char)-46;
unsigned short var_15 = (unsigned short)14008;
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
