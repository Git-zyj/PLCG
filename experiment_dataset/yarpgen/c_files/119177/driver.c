#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4030598208U;
unsigned long long int var_3 = 14872625422439759941ULL;
unsigned short var_10 = (unsigned short)41272;
int var_12 = -1451914894;
int zero = 0;
int var_15 = -1543014860;
long long int var_16 = -1224398841120329806LL;
void init() {
}

void checksum() {
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
