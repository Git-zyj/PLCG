#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned short var_4 = (unsigned short)6365;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 3153466512472765050ULL;
unsigned long long int var_11 = 16473333156166436081ULL;
short var_12 = (short)28098;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = -274565922439332492LL;
unsigned long long int var_16 = 9154537709180385381ULL;
int zero = 0;
long long int var_17 = -3325426262253648583LL;
unsigned long long int var_18 = 11224990970992779969ULL;
void init() {
}

void checksum() {
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
