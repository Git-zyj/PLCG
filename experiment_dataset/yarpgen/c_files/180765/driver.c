#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21076;
signed char var_5 = (signed char)-88;
signed char var_8 = (signed char)-70;
signed char var_10 = (signed char)28;
long long int var_12 = -5944617968033837483LL;
int zero = 0;
long long int var_14 = -9101691464277142511LL;
long long int var_15 = 791365585736497942LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
