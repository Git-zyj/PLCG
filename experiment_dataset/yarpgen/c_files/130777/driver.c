#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16351837534685165285ULL;
unsigned short var_3 = (unsigned short)20049;
unsigned char var_4 = (unsigned char)170;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3729287044U;
unsigned long long int var_10 = 14098772523673051836ULL;
unsigned short var_12 = (unsigned short)63342;
int zero = 0;
long long int var_16 = 5324379813058292188LL;
signed char var_17 = (signed char)110;
unsigned int var_18 = 1906311896U;
void init() {
}

void checksum() {
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
