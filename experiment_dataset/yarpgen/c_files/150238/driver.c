#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-20335;
int var_5 = -2023591114;
signed char var_11 = (signed char)21;
unsigned long long int var_12 = 2143240825000675917ULL;
unsigned char var_13 = (unsigned char)192;
signed char var_16 = (signed char)73;
unsigned int var_17 = 201449466U;
int zero = 0;
short var_20 = (short)8173;
int var_21 = 1216016837;
int var_22 = -1782148540;
short var_23 = (short)-15689;
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
