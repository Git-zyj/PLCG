#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16416;
unsigned short var_7 = (unsigned short)6008;
long long int var_8 = 4128653429409231959LL;
int var_10 = -1644621271;
signed char var_12 = (signed char)34;
int var_13 = 1641950571;
unsigned short var_14 = (unsigned short)56874;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17855507696004762374ULL;
short var_18 = (short)-1853;
unsigned int var_19 = 2994225276U;
unsigned int var_20 = 3936494042U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
