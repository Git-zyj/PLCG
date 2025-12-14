#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)23826;
unsigned long long int var_14 = 16581799956127828696ULL;
signed char var_16 = (signed char)-122;
unsigned char var_18 = (unsigned char)114;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
short var_21 = (short)-22380;
signed char var_22 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
