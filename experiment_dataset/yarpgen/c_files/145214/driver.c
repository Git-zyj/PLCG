#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
unsigned int var_2 = 3286436875U;
int var_3 = -1836898024;
long long int var_5 = 5598321406855192490LL;
long long int var_6 = -8739598001220127808LL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3433728591U;
int var_12 = -1269401459;
short var_13 = (short)-28994;
unsigned char var_15 = (unsigned char)239;
int var_16 = 2071948449;
int zero = 0;
int var_17 = 1172645842;
int var_18 = -1478960797;
unsigned int var_19 = 4179937055U;
void init() {
}

void checksum() {
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
