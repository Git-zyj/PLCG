#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 471879528;
long long int var_1 = 284330448285782219LL;
unsigned long long int var_2 = 1903553237455503834ULL;
signed char var_3 = (signed char)-81;
unsigned short var_4 = (unsigned short)59580;
unsigned int var_5 = 3731363153U;
unsigned char var_6 = (unsigned char)19;
unsigned short var_7 = (unsigned short)39989;
long long int var_8 = 7668787295484236435LL;
long long int var_9 = 3533787459063642461LL;
int var_10 = 3182823;
unsigned long long int var_11 = 18052850057006974983ULL;
unsigned int var_12 = 3498086257U;
int var_13 = -873498969;
int zero = 0;
unsigned char var_14 = (unsigned char)232;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 7683912796542432835ULL;
unsigned int var_17 = 354128550U;
unsigned long long int var_18 = 17654749439261173892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
