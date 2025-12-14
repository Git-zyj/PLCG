#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3337785440U;
int var_8 = -611410727;
unsigned short var_9 = (unsigned short)60211;
int var_10 = 1451354927;
_Bool var_11 = (_Bool)1;
int var_12 = 1648027258;
int zero = 0;
short var_13 = (short)-2991;
short var_14 = (short)6923;
long long int var_15 = 6384392196944666002LL;
unsigned int var_16 = 139476316U;
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
