#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9769;
unsigned int var_1 = 3867865275U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5836927969293893100ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1097892289;
unsigned int var_12 = 2314608074U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
