#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 11980757267525670349ULL;
unsigned long long int var_12 = 11192458929393280402ULL;
long long int var_13 = -722510362408061352LL;
unsigned int var_14 = 2921574750U;
int zero = 0;
unsigned int var_18 = 4082969592U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
