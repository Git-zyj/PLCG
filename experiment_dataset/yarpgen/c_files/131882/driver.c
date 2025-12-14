#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6982029837303004398ULL;
int var_10 = 794231270;
unsigned int var_12 = 4286339359U;
long long int var_13 = -6183162055862640033LL;
unsigned int var_15 = 3550314390U;
unsigned char var_16 = (unsigned char)128;
unsigned long long int var_17 = 6730539354724501993ULL;
int zero = 0;
short var_18 = (short)12416;
short var_19 = (short)3870;
unsigned long long int var_20 = 13743265178498339527ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
