#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52392;
signed char var_1 = (signed char)-11;
unsigned int var_4 = 3327761979U;
unsigned char var_7 = (unsigned char)62;
long long int var_9 = -1728665042013277073LL;
long long int var_10 = 3850583882925321859LL;
short var_11 = (short)-20361;
unsigned int var_13 = 3669866659U;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)52138;
int zero = 0;
signed char var_17 = (signed char)6;
unsigned char var_18 = (unsigned char)46;
short var_19 = (short)14050;
_Bool var_20 = (_Bool)0;
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
