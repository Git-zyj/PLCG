#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64223;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)27034;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4675645625942962815ULL;
unsigned long long int var_14 = 8482363988484552917ULL;
unsigned short var_15 = (unsigned short)37938;
unsigned short var_16 = (unsigned short)43126;
unsigned int var_17 = 4032238191U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -229075485;
unsigned long long int var_21 = 14451509390588563951ULL;
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
