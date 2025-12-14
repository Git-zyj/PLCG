#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12989;
unsigned char var_2 = (unsigned char)85;
unsigned int var_3 = 2146134507U;
long long int var_4 = -970228752624009554LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)33;
long long int var_8 = -5922375141993034403LL;
int var_9 = -911274858;
unsigned long long int var_13 = 4474694270284662855ULL;
long long int var_14 = 4172476008227846606LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)31787;
int var_17 = -399305597;
int var_18 = -2021337559;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10860389383834940201ULL;
unsigned char var_21 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
