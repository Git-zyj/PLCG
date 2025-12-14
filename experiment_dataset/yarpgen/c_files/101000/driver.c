#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned char var_1 = (unsigned char)230;
long long int var_2 = 6509193402156758782LL;
unsigned long long int var_3 = 814133574532730383ULL;
unsigned int var_7 = 2324381431U;
unsigned long long int var_10 = 9122167402921312080ULL;
unsigned short var_11 = (unsigned short)28471;
unsigned short var_15 = (unsigned short)19362;
int zero = 0;
long long int var_16 = 5300849908641363713LL;
unsigned long long int var_17 = 3965930982298953235ULL;
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
