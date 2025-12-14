#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_6 = -8193141237667477321LL;
long long int var_7 = 7150971388422983739LL;
unsigned int var_8 = 1364936078U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)68;
unsigned char var_11 = (unsigned char)203;
int var_16 = -1278398824;
unsigned char var_17 = (unsigned char)96;
int zero = 0;
unsigned char var_18 = (unsigned char)47;
int var_19 = -1025001190;
void init() {
}

void checksum() {
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
