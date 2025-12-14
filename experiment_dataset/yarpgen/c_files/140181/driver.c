#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-25;
unsigned int var_7 = 2884787821U;
int var_12 = -1917606221;
unsigned int var_16 = 54083762U;
int zero = 0;
long long int var_20 = -964614282524143834LL;
int var_21 = 1953885535;
_Bool var_22 = (_Bool)0;
long long int var_23 = -7475852704745674876LL;
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
