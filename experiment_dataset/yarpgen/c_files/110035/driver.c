#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1641243227U;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)104;
signed char var_6 = (signed char)51;
unsigned int var_8 = 877712214U;
short var_11 = (short)-18168;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1021349166;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)104;
unsigned int var_17 = 477372335U;
void init() {
}

void checksum() {
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
