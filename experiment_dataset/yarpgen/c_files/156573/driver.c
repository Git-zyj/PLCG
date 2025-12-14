#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16941569617869519261ULL;
unsigned int var_3 = 1108167915U;
unsigned short var_6 = (unsigned short)61128;
unsigned long long int var_8 = 7303980984912198405ULL;
int zero = 0;
signed char var_13 = (signed char)13;
short var_14 = (short)-22646;
unsigned long long int var_15 = 12516023468120067555ULL;
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
