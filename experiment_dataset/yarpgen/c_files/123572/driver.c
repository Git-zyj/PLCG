#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 576937749U;
unsigned char var_8 = (unsigned char)168;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 9958414071139314486ULL;
signed char var_17 = (signed char)-83;
int zero = 0;
short var_19 = (short)-28710;
int var_20 = 1517776967;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
