#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1090522574;
long long int var_6 = -3065579462636348564LL;
short var_7 = (short)8020;
_Bool var_8 = (_Bool)1;
long long int var_15 = -8398096304938789192LL;
signed char var_16 = (signed char)-122;
int zero = 0;
int var_18 = -2122006470;
unsigned long long int var_19 = 14099679676813920456ULL;
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
