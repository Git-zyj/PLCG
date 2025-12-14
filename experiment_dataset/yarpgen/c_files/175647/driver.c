#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -144380428;
_Bool var_6 = (_Bool)0;
unsigned int var_12 = 3873531924U;
unsigned int var_13 = 2636012226U;
int zero = 0;
unsigned int var_20 = 1924318770U;
unsigned int var_21 = 56333183U;
_Bool var_22 = (_Bool)0;
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
