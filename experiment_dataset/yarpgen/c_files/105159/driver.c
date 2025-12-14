#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48396;
int var_3 = 1957556496;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-60;
unsigned int var_8 = 3200763375U;
signed char var_11 = (signed char)33;
int zero = 0;
short var_14 = (short)-20871;
unsigned long long int var_15 = 5925848599591614544ULL;
int var_16 = -869440827;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
