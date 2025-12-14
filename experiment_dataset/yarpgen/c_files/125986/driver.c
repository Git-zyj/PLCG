#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_2 = (_Bool)1;
short var_4 = (short)20872;
unsigned short var_6 = (unsigned short)4271;
signed char var_8 = (signed char)64;
long long int var_10 = 6991732380658048385LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-26503;
unsigned int var_17 = 3883829746U;
int var_18 = 155845512;
int var_19 = 614841331;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
