#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2860957349U;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 844098220U;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 2367712818U;
unsigned int var_17 = 1253927359U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 608509062U;
unsigned int var_22 = 3404343538U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
