#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
long long int var_3 = -4216017504744271866LL;
unsigned long long int var_5 = 3983468704186192965ULL;
unsigned int var_6 = 307461185U;
unsigned short var_9 = (unsigned short)26799;
unsigned char var_12 = (unsigned char)220;
int zero = 0;
signed char var_16 = (signed char)-93;
unsigned long long int var_17 = 12523388996185813844ULL;
unsigned short var_18 = (unsigned short)50107;
unsigned int var_19 = 1425513810U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
