#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)56907;
short var_2 = (short)17499;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)18969;
short var_6 = (short)-4735;
short var_7 = (short)-25926;
int var_8 = 1039211683;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13101978794932771928ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)64;
int zero = 0;
int var_13 = -466707128;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)38;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
