#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16792748477555098805ULL;
unsigned short var_3 = (unsigned short)20164;
unsigned long long int var_5 = 15785838991628457134ULL;
int zero = 0;
signed char var_10 = (signed char)-120;
unsigned long long int var_11 = 13014673289317975018ULL;
unsigned short var_12 = (unsigned short)16268;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
