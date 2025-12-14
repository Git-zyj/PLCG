#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -1686071515555751759LL;
unsigned char var_5 = (unsigned char)139;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 10967308476897764240ULL;
unsigned int var_13 = 224492495U;
unsigned int var_14 = 3700545748U;
unsigned short var_15 = (unsigned short)2937;
_Bool var_16 = (_Bool)1;
int var_18 = 147286034;
int zero = 0;
unsigned char var_20 = (unsigned char)222;
signed char var_21 = (signed char)-36;
unsigned int var_22 = 3530118018U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
