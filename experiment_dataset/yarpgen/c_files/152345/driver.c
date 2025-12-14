#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 581609829;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 4072243081U;
signed char var_5 = (signed char)118;
unsigned short var_7 = (unsigned short)12032;
signed char var_12 = (signed char)59;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1612919797U;
unsigned char var_16 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
