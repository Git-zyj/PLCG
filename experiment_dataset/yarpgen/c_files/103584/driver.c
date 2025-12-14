#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2471415848U;
unsigned long long int var_5 = 2284513038053820941ULL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 13630410493501953893ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -499514815709237914LL;
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
