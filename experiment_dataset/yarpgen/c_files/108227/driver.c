#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1519285374U;
unsigned int var_6 = 2428715016U;
unsigned int var_8 = 2370829945U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 3137288061U;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3932899376U;
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
