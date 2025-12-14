#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2276370522U;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-31388;
unsigned long long int var_8 = 482437899610683446ULL;
unsigned long long int var_10 = 10656162546310042058ULL;
int zero = 0;
short var_12 = (short)-13877;
unsigned short var_13 = (unsigned short)52506;
unsigned short var_14 = (unsigned short)48226;
unsigned char var_15 = (unsigned char)5;
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
