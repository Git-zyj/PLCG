#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1982755929;
int var_9 = 439269008;
unsigned long long int var_13 = 16274285080258850080ULL;
int zero = 0;
unsigned long long int var_14 = 15171422432869815037ULL;
short var_15 = (short)-30541;
unsigned char var_16 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
