#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1565;
short var_2 = (short)18769;
unsigned int var_3 = 876528270U;
unsigned short var_4 = (unsigned short)33574;
long long int var_5 = 2201830468874076016LL;
signed char var_7 = (signed char)-1;
unsigned int var_8 = 577128642U;
unsigned long long int var_11 = 17376641033667488977ULL;
unsigned short var_12 = (unsigned short)45846;
int zero = 0;
unsigned int var_13 = 2643996131U;
short var_14 = (short)-7210;
_Bool var_15 = (_Bool)1;
int var_16 = -581105979;
unsigned int var_17 = 1465897958U;
void init() {
}

void checksum() {
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
