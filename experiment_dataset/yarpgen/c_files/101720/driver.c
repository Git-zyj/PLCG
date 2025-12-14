#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
short var_5 = (short)-16587;
signed char var_11 = (signed char)0;
int zero = 0;
unsigned short var_12 = (unsigned short)30112;
_Bool var_13 = (_Bool)1;
short var_14 = (short)16810;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
