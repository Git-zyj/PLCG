#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1450147669;
_Bool var_3 = (_Bool)0;
int var_5 = 961249436;
int var_9 = -1211140687;
int zero = 0;
int var_12 = 295924751;
long long int var_13 = -6296041133088681382LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
