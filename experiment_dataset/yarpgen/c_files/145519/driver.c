#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3751766900U;
unsigned char var_18 = (unsigned char)222;
int zero = 0;
signed char var_20 = (signed char)-90;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)92;
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
