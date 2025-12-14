#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7026257085807939980LL;
long long int var_9 = -8372558718999509160LL;
unsigned char var_15 = (unsigned char)204;
unsigned long long int var_16 = 1894546758391813432ULL;
unsigned char var_17 = (unsigned char)247;
int zero = 0;
unsigned long long int var_18 = 12405030461954104134ULL;
short var_19 = (short)12693;
unsigned long long int var_20 = 14216841003982960512ULL;
unsigned int var_21 = 1439855224U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
