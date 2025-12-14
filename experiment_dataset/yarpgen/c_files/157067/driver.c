#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4249494232U;
signed char var_2 = (signed char)-21;
signed char var_4 = (signed char)-70;
unsigned short var_8 = (unsigned short)12379;
unsigned int var_9 = 468504094U;
unsigned int var_10 = 3626767691U;
int zero = 0;
signed char var_11 = (signed char)-9;
signed char var_12 = (signed char)68;
signed char var_13 = (signed char)52;
unsigned int var_14 = 2470098810U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
