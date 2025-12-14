#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2376868554U;
short var_1 = (short)-7969;
short var_2 = (short)-4113;
signed char var_3 = (signed char)76;
unsigned short var_4 = (unsigned short)7519;
short var_7 = (short)25829;
long long int var_8 = 2783425574529650160LL;
unsigned short var_9 = (unsigned short)8657;
short var_10 = (short)-7375;
int var_11 = -1474140900;
long long int var_13 = -7414626825942627037LL;
long long int var_14 = 7095386474352535998LL;
signed char var_15 = (signed char)-70;
unsigned short var_16 = (unsigned short)10025;
signed char var_17 = (signed char)64;
int zero = 0;
unsigned int var_18 = 3594010950U;
unsigned short var_19 = (unsigned short)5201;
int var_20 = -1222912410;
_Bool var_21 = (_Bool)1;
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
