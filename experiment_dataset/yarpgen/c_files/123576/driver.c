#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2401185783966869463LL;
short var_1 = (short)3695;
unsigned short var_3 = (unsigned short)64064;
signed char var_4 = (signed char)75;
unsigned char var_5 = (unsigned char)246;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)46045;
unsigned short var_10 = (unsigned short)160;
long long int var_12 = 695441695995125439LL;
signed char var_15 = (signed char)-15;
long long int var_16 = 6571877696806284559LL;
int zero = 0;
unsigned short var_17 = (unsigned short)15982;
int var_18 = -283726386;
unsigned short var_19 = (unsigned short)1171;
unsigned short var_20 = (unsigned short)59674;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
