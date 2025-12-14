#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)4671;
signed char var_2 = (signed char)5;
short var_4 = (short)-7571;
unsigned char var_5 = (unsigned char)156;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)51;
unsigned short var_13 = (unsigned short)31527;
int zero = 0;
signed char var_14 = (signed char)-28;
long long int var_15 = 5158782833393035076LL;
unsigned int var_16 = 3609232333U;
unsigned int var_17 = 2750753611U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
