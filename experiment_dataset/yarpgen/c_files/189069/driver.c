#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)55;
short var_7 = (short)-12855;
unsigned short var_8 = (unsigned short)45520;
_Bool var_16 = (_Bool)1;
int var_18 = 841201420;
int zero = 0;
signed char var_19 = (signed char)-15;
long long int var_20 = 6777251166734951445LL;
void init() {
}

void checksum() {
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
