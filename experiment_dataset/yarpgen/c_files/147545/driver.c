#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2430498981U;
signed char var_9 = (signed char)-39;
int var_10 = 1853582151;
unsigned int var_11 = 1846854665U;
int zero = 0;
signed char var_15 = (signed char)45;
int var_16 = -1195585616;
signed char var_17 = (signed char)33;
_Bool var_18 = (_Bool)0;
short var_19 = (short)4984;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
