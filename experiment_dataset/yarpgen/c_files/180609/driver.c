#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17236;
unsigned int var_6 = 1254035599U;
unsigned int var_7 = 3286551801U;
unsigned int var_11 = 1473156502U;
unsigned short var_12 = (unsigned short)16765;
unsigned short var_14 = (unsigned short)2534;
unsigned char var_16 = (unsigned char)84;
int zero = 0;
unsigned short var_17 = (unsigned short)4555;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8829680828310532536LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
