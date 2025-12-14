#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)84;
unsigned short var_11 = (unsigned short)16242;
signed char var_12 = (signed char)47;
int zero = 0;
unsigned int var_14 = 3950957124U;
unsigned short var_15 = (unsigned short)57916;
short var_16 = (short)-14149;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
