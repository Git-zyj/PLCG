#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2003775000;
unsigned int var_1 = 2481604293U;
unsigned long long int var_2 = 8243956842490414277ULL;
signed char var_7 = (signed char)-97;
short var_12 = (short)-29627;
unsigned short var_14 = (unsigned short)33142;
int zero = 0;
short var_19 = (short)-19796;
int var_20 = 1886253697;
unsigned short var_21 = (unsigned short)13830;
_Bool var_22 = (_Bool)0;
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
