#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2749372840U;
long long int var_2 = -2375555745289075184LL;
short var_3 = (short)-18634;
unsigned int var_4 = 146183540U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 657264523U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_9 = 2114021096;
unsigned int var_11 = 817489854U;
unsigned long long int var_12 = 801274525839478159ULL;
int var_13 = -1798462016;
int zero = 0;
unsigned short var_14 = (unsigned short)12809;
short var_15 = (short)-15760;
signed char var_16 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
