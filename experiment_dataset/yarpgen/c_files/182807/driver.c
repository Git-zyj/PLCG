#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 164116510;
unsigned int var_7 = 3269234629U;
long long int var_8 = -3525267308483372538LL;
unsigned char var_9 = (unsigned char)144;
short var_10 = (short)12248;
unsigned long long int var_11 = 10325282886235974862ULL;
unsigned long long int var_13 = 121938229082840368ULL;
unsigned int var_14 = 1476095861U;
int zero = 0;
int var_16 = 920506616;
signed char var_17 = (signed char)-22;
short var_18 = (short)-17733;
signed char var_19 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
