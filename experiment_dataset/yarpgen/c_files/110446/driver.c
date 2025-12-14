#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned short var_1 = (unsigned short)49361;
unsigned short var_3 = (unsigned short)29376;
long long int var_6 = 7395947080266860638LL;
short var_7 = (short)20048;
int var_10 = 1417422461;
long long int var_11 = -8825180074161518433LL;
int var_13 = -1836724936;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6852847764257274552LL;
int var_18 = 1258006819;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
