#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_8 = (signed char)48;
short var_9 = (short)26008;
short var_11 = (short)16365;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1124150373U;
signed char var_22 = (signed char)106;
unsigned long long int var_23 = 12801034326200365447ULL;
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
