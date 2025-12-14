#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2386236144U;
unsigned short var_14 = (unsigned short)18520;
int zero = 0;
long long int var_19 = 5943623318257502172LL;
unsigned long long int var_20 = 10811327728187062440ULL;
signed char var_21 = (signed char)-94;
short var_22 = (short)-19608;
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
