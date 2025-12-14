#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
signed char var_1 = (signed char)-87;
unsigned long long int var_4 = 1749221225110950956ULL;
unsigned short var_5 = (unsigned short)15610;
_Bool var_6 = (_Bool)1;
int var_7 = -589239787;
signed char var_8 = (signed char)42;
unsigned short var_9 = (unsigned short)3759;
int zero = 0;
signed char var_10 = (signed char)96;
signed char var_11 = (signed char)24;
_Bool var_12 = (_Bool)1;
short var_13 = (short)151;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
