#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)39468;
long long int var_17 = -1105200315009396353LL;
int zero = 0;
signed char var_18 = (signed char)-62;
short var_19 = (short)13202;
int var_20 = 403643148;
unsigned char var_21 = (unsigned char)163;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
