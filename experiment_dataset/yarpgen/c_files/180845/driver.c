#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3124134674U;
long long int var_5 = 6912589685955142233LL;
short var_6 = (short)29783;
int var_8 = -1686452504;
unsigned short var_10 = (unsigned short)52827;
int var_11 = 138118829;
int var_12 = 1894096714;
int zero = 0;
unsigned int var_13 = 2590972325U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)37373;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
