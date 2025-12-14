#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7610998098223761758ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11088620599232007481ULL;
unsigned int var_4 = 2141767622U;
unsigned int var_5 = 2130845412U;
long long int var_6 = 6885044212514235857LL;
unsigned int var_8 = 3770207893U;
unsigned int var_10 = 2393669056U;
long long int var_12 = 505694249405333292LL;
unsigned short var_13 = (unsigned short)37934;
unsigned long long int var_14 = 3443012826585920337ULL;
int var_15 = 1781709152;
int zero = 0;
short var_17 = (short)-4086;
long long int var_18 = -2711855891403015481LL;
unsigned char var_19 = (unsigned char)248;
short var_20 = (short)23037;
unsigned char var_21 = (unsigned char)172;
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
