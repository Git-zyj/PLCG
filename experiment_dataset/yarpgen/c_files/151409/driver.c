#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-11798;
short var_2 = (short)27553;
unsigned int var_6 = 3880796367U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-32030;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10095669323077214044ULL;
int zero = 0;
unsigned int var_18 = 3323839964U;
signed char var_19 = (signed char)78;
unsigned int var_20 = 4016577696U;
signed char var_21 = (signed char)12;
void init() {
}

void checksum() {
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
