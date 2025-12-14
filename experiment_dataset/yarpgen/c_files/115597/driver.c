#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 805911728;
unsigned int var_7 = 134362629U;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)37;
unsigned int var_17 = 3073321700U;
int zero = 0;
unsigned int var_19 = 3989726156U;
long long int var_20 = -946559219647140756LL;
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
