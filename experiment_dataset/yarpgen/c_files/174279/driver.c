#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -777339419;
long long int var_1 = -3450682968210634289LL;
short var_2 = (short)-16329;
int var_3 = 268721313;
unsigned int var_4 = 4223419947U;
long long int var_6 = -4563589042971194641LL;
short var_7 = (short)-11179;
unsigned short var_10 = (unsigned short)8568;
_Bool var_11 = (_Bool)0;
int var_12 = 795939881;
short var_14 = (short)-8165;
int zero = 0;
short var_15 = (short)-9394;
signed char var_16 = (signed char)112;
long long int var_17 = -8930446165356583402LL;
unsigned char var_18 = (unsigned char)207;
void init() {
}

void checksum() {
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
