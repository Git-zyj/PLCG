#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 989907625227223192ULL;
long long int var_2 = 6230259497511015251LL;
short var_4 = (short)-6033;
short var_6 = (short)-4953;
long long int var_13 = 3775583615556108752LL;
long long int var_14 = 6217231396164195019LL;
int var_15 = 727968118;
int zero = 0;
long long int var_18 = -6428857340054897007LL;
unsigned int var_19 = 2969794688U;
short var_20 = (short)32295;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
