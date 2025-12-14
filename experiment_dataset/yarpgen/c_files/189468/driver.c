#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1461588935;
unsigned short var_4 = (unsigned short)59797;
unsigned int var_5 = 3292803621U;
long long int var_6 = 5873236038077654470LL;
unsigned short var_8 = (unsigned short)6560;
signed char var_10 = (signed char)-99;
int zero = 0;
unsigned int var_13 = 3086730783U;
unsigned long long int var_14 = 7655590231499288260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
