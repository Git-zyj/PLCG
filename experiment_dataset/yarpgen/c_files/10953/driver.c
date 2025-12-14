#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2805;
signed char var_2 = (signed char)-1;
unsigned int var_3 = 2281850044U;
int var_5 = -181634196;
unsigned int var_8 = 823286581U;
long long int var_9 = 4737853385698647028LL;
unsigned char var_10 = (unsigned char)205;
signed char var_15 = (signed char)-11;
int zero = 0;
int var_17 = -72870226;
unsigned short var_18 = (unsigned short)60859;
long long int var_19 = 5872130356746924529LL;
short var_20 = (short)-16064;
short var_21 = (short)-7893;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
