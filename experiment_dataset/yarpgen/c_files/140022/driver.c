#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30324;
signed char var_3 = (signed char)96;
signed char var_5 = (signed char)35;
unsigned char var_6 = (unsigned char)24;
unsigned short var_7 = (unsigned short)37109;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 132358876;
unsigned char var_13 = (unsigned char)253;
signed char var_14 = (signed char)67;
signed char var_15 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
