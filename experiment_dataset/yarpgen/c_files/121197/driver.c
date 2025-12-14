#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2347788031597119001LL;
unsigned long long int var_1 = 14923039478216681853ULL;
short var_2 = (short)18489;
long long int var_4 = 7694395369197808189LL;
unsigned char var_5 = (unsigned char)77;
unsigned long long int var_8 = 2415324866075023067ULL;
signed char var_9 = (signed char)-60;
long long int var_12 = -3078055756281041902LL;
unsigned int var_13 = 1729718350U;
long long int var_15 = 7937585785251400209LL;
int zero = 0;
unsigned long long int var_17 = 5011745397578419047ULL;
int var_18 = 669758994;
signed char var_19 = (signed char)-80;
unsigned short var_20 = (unsigned short)64948;
void init() {
}

void checksum() {
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
