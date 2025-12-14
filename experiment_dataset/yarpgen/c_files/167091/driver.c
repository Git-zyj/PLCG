#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)41489;
long long int var_5 = -8842007063165130854LL;
int var_7 = -1002320150;
unsigned short var_8 = (unsigned short)30673;
int var_15 = 2080358272;
int zero = 0;
signed char var_20 = (signed char)55;
short var_21 = (short)29976;
void init() {
}

void checksum() {
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
