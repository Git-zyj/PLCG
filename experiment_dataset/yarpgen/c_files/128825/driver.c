#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9274445862478025145ULL;
long long int var_5 = -7837215350964976642LL;
int var_8 = -1618563606;
signed char var_11 = (signed char)25;
unsigned int var_12 = 2009442237U;
long long int var_16 = 3660810811892631838LL;
int zero = 0;
signed char var_20 = (signed char)-123;
unsigned char var_21 = (unsigned char)20;
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
