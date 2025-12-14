#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37853;
unsigned short var_3 = (unsigned short)54845;
unsigned short var_6 = (unsigned short)7991;
_Bool var_9 = (_Bool)0;
int var_10 = -1613327582;
unsigned char var_13 = (unsigned char)226;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)1842;
unsigned char var_16 = (unsigned char)165;
short var_17 = (short)11604;
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
