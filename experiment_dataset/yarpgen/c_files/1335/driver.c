#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7644;
long long int var_3 = -5732902202659403387LL;
signed char var_7 = (signed char)126;
unsigned char var_10 = (unsigned char)217;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-17549;
short var_17 = (short)21934;
unsigned int var_18 = 3915512030U;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
short var_20 = (short)32423;
void init() {
}

void checksum() {
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
