#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1664;
short var_2 = (short)2556;
long long int var_3 = 1433446919922612156LL;
unsigned int var_5 = 2923366808U;
signed char var_8 = (signed char)31;
long long int var_10 = -5890778906178638614LL;
unsigned long long int var_11 = 18339724974066309307ULL;
int zero = 0;
long long int var_12 = -7251897680567760746LL;
int var_13 = 1366994397;
unsigned int var_14 = 3657504073U;
unsigned short var_15 = (unsigned short)17092;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
