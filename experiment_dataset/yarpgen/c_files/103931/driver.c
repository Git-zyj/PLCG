#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38080;
short var_5 = (short)-29581;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)52;
int zero = 0;
unsigned int var_15 = 903175601U;
unsigned int var_16 = 3061757553U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
