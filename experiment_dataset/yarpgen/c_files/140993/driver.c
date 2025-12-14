#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48566;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_16 = (signed char)59;
int zero = 0;
signed char var_19 = (signed char)43;
short var_20 = (short)32038;
int var_21 = 76880007;
unsigned int var_22 = 2187698949U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
