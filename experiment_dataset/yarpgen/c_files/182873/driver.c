#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3053468779U;
int var_1 = -1139798070;
unsigned int var_3 = 1220951426U;
signed char var_8 = (signed char)-102;
unsigned char var_9 = (unsigned char)76;
short var_10 = (short)-4527;
unsigned short var_13 = (unsigned short)45649;
short var_14 = (short)-25543;
short var_15 = (short)1655;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)87;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 749426422662569524LL;
void init() {
}

void checksum() {
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
