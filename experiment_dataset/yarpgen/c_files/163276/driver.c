#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7212594815183405362LL;
unsigned char var_3 = (unsigned char)176;
unsigned short var_6 = (unsigned short)32845;
unsigned short var_11 = (unsigned short)5283;
unsigned short var_12 = (unsigned short)36430;
unsigned char var_13 = (unsigned char)205;
unsigned int var_14 = 2608865050U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)102;
signed char var_18 = (signed char)61;
unsigned short var_19 = (unsigned short)20987;
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
