#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17687;
short var_3 = (short)7058;
short var_4 = (short)7620;
unsigned short var_5 = (unsigned short)39587;
unsigned char var_6 = (unsigned char)147;
unsigned char var_8 = (unsigned char)173;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-119;
long long int var_11 = -3399022671108369020LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3029623284U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-29483;
short var_17 = (short)14933;
unsigned int var_18 = 2947497372U;
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
