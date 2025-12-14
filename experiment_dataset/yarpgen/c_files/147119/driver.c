#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 676749198U;
unsigned int var_2 = 3045408588U;
_Bool var_3 = (_Bool)0;
int var_6 = -1651416870;
long long int var_7 = -5388253767715343716LL;
_Bool var_10 = (_Bool)0;
long long int var_15 = 6697584615602589207LL;
long long int var_16 = 7066210445344202526LL;
int zero = 0;
unsigned short var_19 = (unsigned short)24187;
unsigned int var_20 = 3741495479U;
short var_21 = (short)1437;
short var_22 = (short)-318;
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
