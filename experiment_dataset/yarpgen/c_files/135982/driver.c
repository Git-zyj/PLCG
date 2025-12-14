#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned int var_4 = 1504487105U;
signed char var_5 = (signed char)61;
unsigned long long int var_11 = 2460023059836257636ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)47;
unsigned short var_19 = (unsigned short)24484;
void init() {
}

void checksum() {
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
