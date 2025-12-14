#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44805;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)26263;
signed char var_7 = (signed char)-48;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)29480;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-3606;
unsigned short var_15 = (unsigned short)9944;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3224440564U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
