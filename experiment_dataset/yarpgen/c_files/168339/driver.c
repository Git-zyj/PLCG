#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9850;
_Bool var_10 = (_Bool)0;
short var_15 = (short)30386;
int zero = 0;
unsigned int var_18 = 2726979706U;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5704303426002456150LL;
unsigned int var_21 = 1759746257U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
