#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41249;
int var_1 = 1392186464;
unsigned int var_2 = 203118358U;
unsigned int var_3 = 23383066U;
unsigned short var_5 = (unsigned short)11687;
_Bool var_6 = (_Bool)0;
long long int var_7 = -9191246821051633136LL;
unsigned char var_10 = (unsigned char)0;
unsigned int var_11 = 578839289U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4595065381900701168ULL;
unsigned char var_14 = (unsigned char)113;
long long int var_15 = 3162932816253708657LL;
int zero = 0;
unsigned short var_16 = (unsigned short)13174;
unsigned char var_17 = (unsigned char)128;
short var_18 = (short)-796;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
