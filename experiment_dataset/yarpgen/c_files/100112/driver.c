#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2009229188U;
signed char var_10 = (signed char)-14;
signed char var_13 = (signed char)76;
int zero = 0;
unsigned int var_19 = 3323267502U;
short var_20 = (short)6499;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-20098;
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
