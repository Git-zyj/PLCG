#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32927;
unsigned char var_7 = (unsigned char)127;
signed char var_8 = (signed char)94;
int var_11 = 1041301582;
unsigned int var_13 = 3865937180U;
short var_15 = (short)15605;
int zero = 0;
unsigned long long int var_16 = 13088198509367603578ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)21128;
void init() {
}

void checksum() {
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
