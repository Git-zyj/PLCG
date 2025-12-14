#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1463461964;
unsigned int var_5 = 2413730065U;
int var_7 = -1940480119;
int var_12 = 33344100;
long long int var_14 = -881829670598674170LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-73;
unsigned long long int var_20 = 1994403725685532900ULL;
void init() {
}

void checksum() {
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
