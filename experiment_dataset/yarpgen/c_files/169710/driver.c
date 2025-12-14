#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18242;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)223;
_Bool var_4 = (_Bool)0;
int var_7 = 1541968312;
unsigned char var_8 = (unsigned char)25;
short var_9 = (short)-30162;
long long int var_10 = 1007790000988697808LL;
unsigned long long int var_11 = 7235148256535241950ULL;
long long int var_12 = 5578399300304898434LL;
unsigned short var_13 = (unsigned short)43943;
unsigned char var_15 = (unsigned char)213;
int var_16 = 792202438;
int var_17 = 1884289709;
long long int var_19 = 4126333272658651973LL;
int zero = 0;
unsigned char var_20 = (unsigned char)165;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7705670994558107798ULL;
long long int var_24 = 3301169088681639746LL;
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
