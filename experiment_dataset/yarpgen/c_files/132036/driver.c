#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2224162906U;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_14 = 6627664771697895815LL;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)124;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -3878165002912970738LL;
signed char var_21 = (signed char)-61;
int var_22 = 805188451;
long long int var_23 = -442686353067416529LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
