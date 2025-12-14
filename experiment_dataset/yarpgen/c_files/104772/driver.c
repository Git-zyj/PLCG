#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2053144498;
unsigned int var_1 = 652837337U;
short var_5 = (short)-3905;
_Bool var_6 = (_Bool)0;
int var_11 = 1217974874;
unsigned short var_13 = (unsigned short)42542;
int zero = 0;
unsigned short var_14 = (unsigned short)16062;
unsigned long long int var_15 = 3968073159443889916ULL;
unsigned long long int var_16 = 6908158813942383745ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
