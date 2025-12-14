#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6725;
unsigned long long int var_2 = 16114960461799778661ULL;
short var_3 = (short)24839;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)824;
signed char var_8 = (signed char)49;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3961623918U;
unsigned int var_16 = 3653217018U;
unsigned long long int var_17 = 6566527774112288225ULL;
int var_18 = -1338228555;
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
