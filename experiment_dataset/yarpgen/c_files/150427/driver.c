#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)4762;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 2938704605890385716ULL;
int zero = 0;
unsigned int var_12 = 657109142U;
unsigned long long int var_13 = 9150172028113539125ULL;
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
