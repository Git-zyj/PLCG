#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 469333825624191368ULL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)32746;
unsigned int var_9 = 4079737702U;
short var_12 = (short)-29510;
int var_14 = -2135309841;
signed char var_16 = (signed char)-81;
int zero = 0;
unsigned short var_17 = (unsigned short)38602;
unsigned int var_18 = 3476412563U;
unsigned int var_19 = 644621077U;
unsigned short var_20 = (unsigned short)45287;
unsigned int var_21 = 2489621318U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
