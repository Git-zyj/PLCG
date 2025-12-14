#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2752351494U;
unsigned char var_5 = (unsigned char)254;
unsigned short var_13 = (unsigned short)4089;
signed char var_15 = (signed char)48;
int var_16 = 1643346909;
unsigned long long int var_17 = 1315178309713624471ULL;
int zero = 0;
short var_18 = (short)14767;
short var_19 = (short)29144;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
