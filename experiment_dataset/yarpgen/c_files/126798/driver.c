#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 525384234015345663LL;
signed char var_8 = (signed char)45;
unsigned short var_10 = (unsigned short)3002;
long long int var_11 = -6567154141718463241LL;
signed char var_12 = (signed char)33;
unsigned short var_15 = (unsigned short)30345;
int zero = 0;
signed char var_17 = (signed char)-15;
long long int var_18 = 1117635337338931001LL;
unsigned int var_19 = 3924344864U;
unsigned long long int var_20 = 10327541078970980254ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
