#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned long long int var_4 = 15528234351943565802ULL;
signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)22;
unsigned char var_10 = (unsigned char)160;
int var_11 = 1836492785;
long long int var_14 = -4070645097586145653LL;
int var_15 = 1776692176;
int zero = 0;
unsigned long long int var_16 = 633678781728799020ULL;
int var_17 = 572657236;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
