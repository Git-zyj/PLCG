#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 3890054942U;
unsigned int var_13 = 410895722U;
short var_14 = (short)-11379;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 13840839541758188852ULL;
short var_18 = (short)21981;
int zero = 0;
unsigned short var_19 = (unsigned short)39512;
int var_20 = -1810085019;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3682425556U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
