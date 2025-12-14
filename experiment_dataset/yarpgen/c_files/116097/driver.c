#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12662;
unsigned char var_2 = (unsigned char)204;
long long int var_4 = -2168282780329746859LL;
int var_5 = 811356854;
short var_6 = (short)-18270;
unsigned long long int var_7 = 4458986823631913070ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 4320309221736189542ULL;
unsigned int var_11 = 2038433186U;
int var_14 = -1807552903;
unsigned long long int var_15 = 10790079497671772712ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 18141657241240620464ULL;
unsigned short var_21 = (unsigned short)27855;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
