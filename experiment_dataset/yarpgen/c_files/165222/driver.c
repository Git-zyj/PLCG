#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -6581884300572676340LL;
long long int var_4 = -3205529154943247059LL;
short var_12 = (short)-30144;
_Bool var_15 = (_Bool)0;
int var_17 = 1498165160;
int zero = 0;
unsigned int var_18 = 324875763U;
unsigned char var_19 = (unsigned char)75;
unsigned short var_20 = (unsigned short)35639;
unsigned char var_21 = (unsigned char)125;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
