#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1634280710289943907LL;
short var_6 = (short)32122;
unsigned int var_7 = 1603970105U;
unsigned int var_11 = 2779568835U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 778404034U;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3190634416897315462LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
