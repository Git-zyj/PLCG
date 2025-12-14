#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7479;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_13 = 944658369759999070LL;
int zero = 0;
short var_14 = (short)-25123;
short var_15 = (short)22294;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-14446;
unsigned short var_18 = (unsigned short)31985;
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
