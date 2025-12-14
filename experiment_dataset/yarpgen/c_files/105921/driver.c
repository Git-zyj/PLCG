#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19678;
unsigned int var_6 = 3769540886U;
unsigned char var_7 = (unsigned char)20;
short var_8 = (short)24436;
int var_13 = -107714894;
int var_14 = 2077488577;
int zero = 0;
long long int var_19 = 5322689244125904858LL;
unsigned int var_20 = 3319421707U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)117;
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
