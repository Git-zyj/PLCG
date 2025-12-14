#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1601429699;
int var_5 = 105203561;
unsigned long long int var_6 = 5958750196154447113ULL;
unsigned long long int var_8 = 576689282541829372ULL;
int zero = 0;
int var_11 = 1856504315;
long long int var_12 = 7461359963772079573LL;
long long int var_13 = 1434090022514386708LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
