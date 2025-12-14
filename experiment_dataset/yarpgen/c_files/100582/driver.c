#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
signed char var_2 = (signed char)-22;
long long int var_3 = -3191655109747080955LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-7117;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = -5764935716085716708LL;
unsigned short var_14 = (unsigned short)2623;
unsigned int var_15 = 2718375709U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
