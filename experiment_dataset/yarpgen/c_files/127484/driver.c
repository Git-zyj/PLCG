#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2498;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6934788049681058625LL;
unsigned short var_10 = (unsigned short)48390;
int var_14 = -713943531;
int zero = 0;
int var_16 = 1950693132;
int var_17 = 1297084665;
signed char var_18 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
