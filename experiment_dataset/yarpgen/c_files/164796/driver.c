#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
long long int var_1 = 9034862456864630920LL;
long long int var_2 = 2533972820562710223LL;
unsigned int var_4 = 1474297209U;
short var_5 = (short)19282;
short var_7 = (short)26497;
long long int var_8 = -6922769255114944623LL;
unsigned int var_10 = 1275597266U;
unsigned int var_11 = 2216481098U;
_Bool var_14 = (_Bool)0;
short var_16 = (short)-6322;
long long int var_17 = 2844458636409765160LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-23;
unsigned int var_22 = 483328289U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
