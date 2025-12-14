#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2016812418;
int var_2 = 745309086;
int var_7 = -947581929;
unsigned long long int var_9 = 7246689491224413758ULL;
unsigned char var_10 = (unsigned char)204;
long long int var_11 = -6225034511592864607LL;
unsigned short var_13 = (unsigned short)60885;
unsigned char var_14 = (unsigned char)94;
int zero = 0;
unsigned long long int var_17 = 1750124985872009144ULL;
unsigned long long int var_18 = 15237955610881782886ULL;
long long int var_19 = 3866696887143887614LL;
void init() {
}

void checksum() {
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
