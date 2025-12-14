#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33746;
unsigned short var_6 = (unsigned short)32353;
unsigned char var_7 = (unsigned char)158;
long long int var_13 = -992793018101943439LL;
short var_14 = (short)1230;
_Bool var_15 = (_Bool)0;
signed char var_18 = (signed char)-71;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8787065311573192488ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 515842481U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
