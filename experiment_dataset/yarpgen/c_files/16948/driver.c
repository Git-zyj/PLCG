#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 406198850U;
long long int var_1 = 7907119036862662621LL;
long long int var_8 = -7413112359382426587LL;
int var_9 = -1979285592;
int var_10 = 1973689804;
int var_12 = -995168718;
unsigned long long int var_15 = 15109468496889667123ULL;
int zero = 0;
int var_20 = 1246188263;
unsigned int var_21 = 1231704054U;
unsigned long long int var_22 = 7500822227819903001ULL;
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
