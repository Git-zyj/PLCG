#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
int var_1 = 383931812;
unsigned short var_2 = (unsigned short)30292;
long long int var_8 = -27701030347431477LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6658581572746104034LL;
int var_14 = 455321932;
unsigned short var_15 = (unsigned short)28790;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)5360;
int var_19 = -438946365;
signed char var_20 = (signed char)33;
unsigned char var_21 = (unsigned char)87;
void init() {
}

void checksum() {
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
