#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1329692831;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-115;
unsigned char var_5 = (unsigned char)113;
signed char var_6 = (signed char)-88;
unsigned int var_8 = 194434501U;
short var_9 = (short)8560;
int var_10 = -684891178;
int zero = 0;
long long int var_11 = -6543796300336644864LL;
signed char var_12 = (signed char)-12;
long long int var_13 = 805348186970086740LL;
long long int var_14 = 8866647612383645697LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
