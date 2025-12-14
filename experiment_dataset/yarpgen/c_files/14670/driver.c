#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1841541198;
short var_4 = (short)-12291;
unsigned short var_6 = (unsigned short)188;
long long int var_7 = 7817623941424724144LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2571770379U;
int zero = 0;
signed char var_16 = (signed char)115;
int var_17 = -1129223034;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)19;
long long int var_20 = -7765981316196873615LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
