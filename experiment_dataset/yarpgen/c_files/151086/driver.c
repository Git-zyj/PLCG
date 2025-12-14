#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3598037688U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-15084;
signed char var_13 = (signed char)-42;
unsigned short var_15 = (unsigned short)38805;
unsigned long long int var_18 = 6175890700669466133ULL;
int zero = 0;
unsigned long long int var_19 = 18410932038776521015ULL;
unsigned int var_20 = 3322946753U;
void init() {
}

void checksum() {
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
