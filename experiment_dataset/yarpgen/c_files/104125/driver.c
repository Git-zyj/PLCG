#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned char var_1 = (unsigned char)230;
signed char var_3 = (signed char)101;
_Bool var_6 = (_Bool)0;
short var_10 = (short)4581;
int var_12 = -40659681;
int zero = 0;
short var_16 = (short)17160;
unsigned int var_17 = 445431472U;
short var_18 = (short)-28760;
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
