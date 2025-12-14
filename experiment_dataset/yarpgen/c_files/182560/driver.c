#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_11 = (signed char)99;
unsigned char var_14 = (unsigned char)22;
long long int var_15 = 3127305575889390708LL;
int zero = 0;
unsigned int var_19 = 2022353503U;
long long int var_20 = 6814359442585597078LL;
long long int var_21 = -237161244665301656LL;
void init() {
}

void checksum() {
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
