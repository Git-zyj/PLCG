#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -50729601;
unsigned char var_4 = (unsigned char)34;
long long int var_10 = -36134307882353135LL;
unsigned short var_12 = (unsigned short)354;
unsigned short var_14 = (unsigned short)8527;
unsigned char var_15 = (unsigned char)123;
int zero = 0;
unsigned short var_16 = (unsigned short)42701;
unsigned long long int var_17 = 10043931355371658309ULL;
unsigned int var_18 = 2520980434U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
