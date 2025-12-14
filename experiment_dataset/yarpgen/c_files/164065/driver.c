#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)6362;
unsigned int var_6 = 371238058U;
unsigned int var_7 = 260732685U;
unsigned short var_9 = (unsigned short)28596;
int var_10 = 294431565;
unsigned long long int var_12 = 5269755079632861573ULL;
short var_14 = (short)3258;
unsigned int var_15 = 833489648U;
signed char var_17 = (signed char)-1;
int zero = 0;
unsigned int var_18 = 3628759499U;
long long int var_19 = -6517291429502482703LL;
unsigned int var_20 = 1700062803U;
unsigned long long int var_21 = 12974959338275134527ULL;
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
