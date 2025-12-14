#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)3180;
int var_11 = 1758717752;
signed char var_12 = (signed char)13;
int var_14 = -326344024;
int var_15 = 1273523847;
int zero = 0;
unsigned long long int var_16 = 1827001765248933140ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)136;
unsigned int var_19 = 2708290050U;
void init() {
}

void checksum() {
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
