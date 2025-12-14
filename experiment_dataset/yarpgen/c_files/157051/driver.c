#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11484514732934913408ULL;
_Bool var_3 = (_Bool)0;
short var_12 = (short)-2163;
int var_15 = -2007710909;
short var_18 = (short)25149;
int zero = 0;
unsigned int var_20 = 2975987991U;
signed char var_21 = (signed char)-35;
signed char var_22 = (signed char)77;
unsigned int var_23 = 315866768U;
short var_24 = (short)3913;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
