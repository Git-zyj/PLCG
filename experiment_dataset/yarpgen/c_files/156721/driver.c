#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1020402839;
unsigned int var_4 = 2241498079U;
signed char var_10 = (signed char)110;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15668603444982301876ULL;
signed char var_14 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
