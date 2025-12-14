#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6801;
unsigned int var_3 = 500822543U;
unsigned char var_4 = (unsigned char)231;
long long int var_6 = -5600858328346778170LL;
short var_7 = (short)-955;
signed char var_8 = (signed char)77;
unsigned int var_9 = 2520937424U;
long long int var_10 = 4013108454531462645LL;
short var_12 = (short)-21311;
unsigned char var_13 = (unsigned char)179;
unsigned char var_16 = (unsigned char)41;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)30;
int var_22 = -1917225493;
unsigned int var_23 = 2827167081U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
