#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57865;
long long int var_2 = -7158371244519328490LL;
unsigned short var_7 = (unsigned short)13319;
int zero = 0;
long long int var_20 = -3053736590850742722LL;
long long int var_21 = 9025483159635929868LL;
unsigned short var_22 = (unsigned short)40079;
void init() {
}

void checksum() {
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
