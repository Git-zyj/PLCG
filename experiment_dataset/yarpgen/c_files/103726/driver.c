#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11151752575762995539ULL;
signed char var_3 = (signed char)-22;
unsigned long long int var_4 = 6661422225663896429ULL;
unsigned long long int var_5 = 17467272880147934869ULL;
unsigned short var_6 = (unsigned short)5268;
unsigned long long int var_9 = 5537520640834848120ULL;
unsigned char var_10 = (unsigned char)141;
unsigned char var_13 = (unsigned char)17;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
int var_17 = 438756748;
short var_18 = (short)-28409;
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
