#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_15 = 2227083776616448715ULL;
long long int var_16 = 5299749722481698731LL;
short var_17 = (short)-124;
unsigned long long int var_18 = 11569776593031822810ULL;
unsigned char var_19 = (unsigned char)191;
short var_20 = (short)22863;
unsigned char var_21 = (unsigned char)85;
long long int var_22 = 7295613300016229117LL;
short var_23 = (short)-20764;
long long int var_24 = -5976933952064957126LL;
unsigned long long int var_25 = 12596148630886194920ULL;
unsigned char var_26 = (unsigned char)25;
unsigned int var_27 = 339093190U;
_Bool var_28 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
