#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned int var_1 = 26910432U;
long long int var_2 = 8990536066985863102LL;
unsigned short var_5 = (unsigned short)32014;
unsigned short var_8 = (unsigned short)57456;
unsigned short var_10 = (unsigned short)37740;
long long int var_11 = -7442307902247959924LL;
unsigned int var_12 = 2688622168U;
unsigned int var_13 = 2667526669U;
int zero = 0;
short var_17 = (short)-30621;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)38776;
void init() {
}

void checksum() {
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
