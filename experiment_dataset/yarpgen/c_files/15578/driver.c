#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4416427812994768927ULL;
unsigned short var_2 = (unsigned short)12240;
unsigned int var_5 = 3531536792U;
unsigned long long int var_10 = 13402734526780931065ULL;
long long int var_12 = -3541595034653741116LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -736632218;
unsigned short var_15 = (unsigned short)53951;
void init() {
}

void checksum() {
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
