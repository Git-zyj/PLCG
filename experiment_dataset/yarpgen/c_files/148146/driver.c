#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1149809842;
short var_1 = (short)7553;
int var_4 = -578202531;
signed char var_5 = (signed char)66;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1631501673;
unsigned int var_13 = 3257767867U;
signed char var_14 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
