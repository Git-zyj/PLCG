#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13193429528656019188ULL;
unsigned char var_4 = (unsigned char)175;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 14742960050635565252ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)113;
int var_14 = -1415616191;
unsigned int var_15 = 1064748767U;
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
