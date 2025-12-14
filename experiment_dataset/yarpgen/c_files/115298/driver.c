#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)122;
signed char var_7 = (signed char)-11;
unsigned char var_10 = (unsigned char)219;
unsigned char var_14 = (unsigned char)190;
unsigned int var_15 = 1871770794U;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)24853;
unsigned short var_20 = (unsigned short)13539;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
