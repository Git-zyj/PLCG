#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 773511641;
int var_2 = -1798118585;
short var_3 = (short)-23817;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-22923;
int var_9 = 313550233;
int var_10 = -1790256779;
unsigned long long int var_11 = 7813755352479342008ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)14568;
long long int var_13 = 8558583668847409081LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
