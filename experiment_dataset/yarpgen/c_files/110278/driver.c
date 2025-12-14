#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 689978001;
signed char var_10 = (signed char)16;
long long int var_12 = -8106349328457689304LL;
unsigned int var_14 = 275524341U;
int zero = 0;
int var_15 = -2077245221;
unsigned long long int var_16 = 6184123553506430430ULL;
signed char var_17 = (signed char)73;
signed char var_18 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
