#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)57385;
unsigned int var_8 = 2502262190U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 7006377927485111958ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 486427091U;
void init() {
}

void checksum() {
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
