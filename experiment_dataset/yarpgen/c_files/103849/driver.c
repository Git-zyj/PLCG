#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -284972993871624532LL;
unsigned short var_3 = (unsigned short)62799;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)59048;
long long int var_8 = -8967869052913277751LL;
short var_10 = (short)-24536;
unsigned char var_12 = (unsigned char)88;
int zero = 0;
short var_16 = (short)23680;
short var_17 = (short)-17535;
void init() {
}

void checksum() {
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
