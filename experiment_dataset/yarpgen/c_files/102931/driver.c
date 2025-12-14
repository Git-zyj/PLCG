#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 186194042U;
_Bool var_10 = (_Bool)0;
int var_11 = 472148903;
int zero = 0;
int var_15 = -96522194;
unsigned int var_16 = 2745977640U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1597920258U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
