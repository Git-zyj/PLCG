#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3544073891U;
unsigned long long int var_7 = 6073534465322968564ULL;
int var_10 = 1661765141;
long long int var_14 = 6725682422905718107LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 9314432909184128786ULL;
unsigned long long int var_17 = 15213127320177993008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
