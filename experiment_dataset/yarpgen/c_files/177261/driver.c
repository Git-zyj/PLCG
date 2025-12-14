#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8341460060224613728ULL;
unsigned short var_5 = (unsigned short)9231;
int var_7 = -1797168346;
unsigned long long int var_10 = 1906316152038891299ULL;
int zero = 0;
signed char var_14 = (signed char)28;
unsigned int var_15 = 2533587076U;
unsigned char var_16 = (unsigned char)197;
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
