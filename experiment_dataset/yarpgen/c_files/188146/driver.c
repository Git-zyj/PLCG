#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1099248125U;
int var_1 = 1507665859;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 376758276U;
unsigned char var_5 = (unsigned char)185;
_Bool var_8 = (_Bool)1;
int var_10 = 763304804;
unsigned int var_11 = 716733379U;
unsigned int var_14 = 782021109U;
int zero = 0;
unsigned int var_15 = 1578584094U;
unsigned int var_16 = 4083326050U;
unsigned int var_17 = 3665275828U;
short var_18 = (short)9257;
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
