#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -2089885601;
int var_7 = -634139305;
unsigned short var_10 = (unsigned short)42679;
short var_12 = (short)-15650;
unsigned short var_13 = (unsigned short)45994;
int zero = 0;
unsigned int var_15 = 246092835U;
short var_16 = (short)6043;
long long int var_17 = 4659245587781918411LL;
short var_18 = (short)10544;
void init() {
}

void checksum() {
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
