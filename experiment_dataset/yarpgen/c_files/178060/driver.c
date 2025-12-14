#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1533963075;
int var_3 = -1455874663;
long long int var_4 = -7932762701873679456LL;
unsigned char var_8 = (unsigned char)179;
unsigned int var_11 = 2062189114U;
int zero = 0;
unsigned int var_12 = 3867653567U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -163277550185681145LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
