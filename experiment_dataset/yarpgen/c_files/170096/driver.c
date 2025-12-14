#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -1359482992617977831LL;
short var_3 = (short)-18767;
short var_5 = (short)-24244;
long long int var_6 = -7000579074762281319LL;
long long int var_8 = 8497534922379799452LL;
short var_10 = (short)-25556;
_Bool var_11 = (_Bool)0;
short var_13 = (short)30156;
long long int var_14 = 7031848564513453097LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)24300;
long long int var_17 = 3266367713356319750LL;
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
