#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4394815467096689062LL;
unsigned long long int var_5 = 11454578709462315990ULL;
unsigned int var_14 = 2629912258U;
long long int var_15 = 8117395117109324325LL;
int zero = 0;
int var_18 = -2021272768;
int var_19 = 733299872;
unsigned long long int var_20 = 5045653741236354635ULL;
int var_21 = 682812326;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
