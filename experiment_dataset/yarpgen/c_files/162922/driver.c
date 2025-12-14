#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)29;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-79;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-31295;
unsigned char var_14 = (unsigned char)221;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-43;
void init() {
}

void checksum() {
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
