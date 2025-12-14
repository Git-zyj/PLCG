#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)29020;
unsigned char var_6 = (unsigned char)148;
short var_9 = (short)24583;
unsigned long long int var_11 = 4678668241673152892ULL;
int var_14 = 2082867742;
unsigned long long int var_16 = 6542147589099647204ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)97;
short var_21 = (short)22093;
short var_22 = (short)-9516;
unsigned int var_23 = 1476960651U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
