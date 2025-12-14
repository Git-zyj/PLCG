#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1661688140U;
unsigned int var_4 = 2525283345U;
int var_5 = -143904207;
unsigned short var_7 = (unsigned short)65497;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2745220831U;
short var_11 = (short)-1310;
int zero = 0;
signed char var_12 = (signed char)-84;
int var_13 = -1412607008;
int var_14 = 486266636;
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
