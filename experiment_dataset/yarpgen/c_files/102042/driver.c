#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11798;
unsigned char var_3 = (unsigned char)44;
int var_7 = 773454229;
unsigned char var_8 = (unsigned char)101;
unsigned int var_9 = 2281092286U;
int var_16 = -939793595;
int zero = 0;
long long int var_17 = -4541197092461748731LL;
unsigned char var_18 = (unsigned char)141;
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
