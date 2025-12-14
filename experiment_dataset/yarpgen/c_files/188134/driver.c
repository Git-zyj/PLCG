#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8160;
unsigned int var_1 = 135578209U;
unsigned short var_3 = (unsigned short)61821;
unsigned int var_4 = 869652300U;
long long int var_6 = 537421006195134752LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)55941;
unsigned char var_11 = (unsigned char)193;
unsigned long long int var_13 = 10269291400608428355ULL;
unsigned long long int var_15 = 1921628216242843304ULL;
unsigned int var_17 = 3383684127U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7758821311927503839LL;
short var_20 = (short)28913;
unsigned short var_21 = (unsigned short)15071;
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
