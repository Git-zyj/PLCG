#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
unsigned long long int var_5 = 2533436696669245812ULL;
signed char var_6 = (signed char)92;
long long int var_8 = 7944308469901064430LL;
long long int var_11 = -8958811706752312675LL;
unsigned long long int var_14 = 945838376208681790ULL;
short var_15 = (short)31563;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = -155899594082044575LL;
unsigned short var_21 = (unsigned short)460;
unsigned long long int var_22 = 363155632220299663ULL;
void init() {
}

void checksum() {
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
