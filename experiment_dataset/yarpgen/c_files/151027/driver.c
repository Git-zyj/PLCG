#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15714060554983886242ULL;
signed char var_5 = (signed char)-9;
unsigned int var_7 = 2625414603U;
int var_10 = -276230243;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = 642949427;
unsigned long long int var_17 = 16603080881613210641ULL;
int var_18 = 2084369646;
signed char var_19 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
