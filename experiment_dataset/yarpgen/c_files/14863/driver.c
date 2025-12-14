#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)48197;
long long int var_8 = -4873389193786644869LL;
signed char var_15 = (signed char)75;
int var_16 = -797447665;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)184;
unsigned int var_21 = 3854765739U;
void init() {
}

void checksum() {
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
