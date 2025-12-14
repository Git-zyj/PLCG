#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13876260557942096405ULL;
unsigned int var_7 = 2726848387U;
unsigned long long int var_8 = 12270258095836047722ULL;
int zero = 0;
unsigned long long int var_11 = 18372330487120994318ULL;
unsigned short var_12 = (unsigned short)35184;
unsigned char var_13 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
