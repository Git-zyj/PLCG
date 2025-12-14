#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3167398771643582483LL;
long long int var_3 = 84524921012058324LL;
unsigned int var_5 = 2900707843U;
long long int var_7 = -6584215298417716266LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1529830661;
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
