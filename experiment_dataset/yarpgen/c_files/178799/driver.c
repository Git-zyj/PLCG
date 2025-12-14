#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
_Bool var_4 = (_Bool)0;
long long int var_6 = 6853834589934705034LL;
int var_9 = 1968627772;
unsigned int var_12 = 3741689035U;
int var_16 = -845403754;
int var_17 = -206581616;
int zero = 0;
unsigned int var_18 = 1305446431U;
unsigned long long int var_19 = 15108032471040118711ULL;
unsigned long long int var_20 = 14415318649353856178ULL;
unsigned long long int var_21 = 3328372573490950991ULL;
unsigned char var_22 = (unsigned char)65;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
