#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4461785898080393777LL;
unsigned int var_13 = 2318611408U;
unsigned long long int var_15 = 4608097662593723836ULL;
signed char var_17 = (signed char)4;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8100753700030144580ULL;
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
