#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5072458268714974801LL;
short var_2 = (short)15092;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)104;
unsigned short var_5 = (unsigned short)17154;
unsigned short var_6 = (unsigned short)14399;
unsigned int var_7 = 2516617835U;
unsigned long long int var_8 = 15436735517061878652ULL;
unsigned short var_9 = (unsigned short)47291;
unsigned short var_10 = (unsigned short)5532;
unsigned short var_11 = (unsigned short)43872;
int zero = 0;
int var_12 = 1173763720;
unsigned long long int var_13 = 1555903812728291879ULL;
unsigned char var_14 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
