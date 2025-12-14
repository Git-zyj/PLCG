#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-54;
long long int var_4 = -7055317149881011095LL;
unsigned short var_5 = (unsigned short)60431;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)18398;
unsigned int var_9 = 2266243698U;
short var_10 = (short)-13379;
long long int var_11 = -3733625767560503502LL;
long long int var_12 = 3416427803879532744LL;
unsigned char var_13 = (unsigned char)165;
short var_14 = (short)11250;
int zero = 0;
long long int var_15 = 2118279586308018697LL;
signed char var_16 = (signed char)-52;
unsigned short var_17 = (unsigned short)48933;
signed char var_18 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
