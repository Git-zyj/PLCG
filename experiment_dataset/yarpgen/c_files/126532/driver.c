#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3607;
unsigned long long int var_2 = 14803729213135229658ULL;
unsigned short var_3 = (unsigned short)22767;
unsigned long long int var_4 = 554222370736855707ULL;
short var_5 = (short)24364;
signed char var_7 = (signed char)-61;
signed char var_11 = (signed char)-92;
long long int var_13 = -1046462969286259291LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3685985977U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
