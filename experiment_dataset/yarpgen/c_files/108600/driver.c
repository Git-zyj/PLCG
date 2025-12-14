#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22604;
unsigned short var_2 = (unsigned short)16223;
unsigned long long int var_7 = 4664638754428133188ULL;
int zero = 0;
short var_11 = (short)-30694;
unsigned int var_12 = 1081083666U;
long long int var_13 = -1103277088951336643LL;
unsigned short var_14 = (unsigned short)63905;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
