#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9103;
unsigned short var_1 = (unsigned short)29836;
signed char var_2 = (signed char)-123;
unsigned short var_3 = (unsigned short)60375;
unsigned long long int var_8 = 1950011414793897309ULL;
long long int var_12 = 4255094387039306064LL;
long long int var_15 = -7241755197978704370LL;
signed char var_16 = (signed char)6;
int zero = 0;
short var_19 = (short)31040;
_Bool var_20 = (_Bool)1;
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
