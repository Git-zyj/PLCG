#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2925872262U;
unsigned int var_6 = 3285376528U;
long long int var_9 = -8518330038094395657LL;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 527901613U;
int var_18 = 2014808398;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-1898;
_Bool var_21 = (_Bool)0;
long long int var_22 = 3580260712465992142LL;
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
