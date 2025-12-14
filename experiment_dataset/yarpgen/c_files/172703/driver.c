#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33642;
signed char var_6 = (signed char)-70;
unsigned char var_7 = (unsigned char)235;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = -1223983410;
unsigned int var_16 = 1617247151U;
void init() {
}

void checksum() {
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
