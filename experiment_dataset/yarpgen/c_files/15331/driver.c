#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-126;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-22258;
short var_11 = (short)3110;
unsigned short var_12 = (unsigned short)52586;
unsigned short var_13 = (unsigned short)16954;
short var_14 = (short)-15196;
int zero = 0;
short var_19 = (short)1102;
_Bool var_20 = (_Bool)0;
long long int var_21 = 669826921216513222LL;
signed char var_22 = (signed char)-40;
void init() {
}

void checksum() {
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
