#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned char var_2 = (unsigned char)62;
unsigned char var_5 = (unsigned char)207;
short var_6 = (short)-20402;
unsigned char var_7 = (unsigned char)55;
unsigned char var_8 = (unsigned char)194;
int var_9 = -1329141028;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-5405;
int zero = 0;
unsigned long long int var_14 = 5566136770084625902ULL;
long long int var_15 = -7929984706869917383LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6772361897173809052LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
