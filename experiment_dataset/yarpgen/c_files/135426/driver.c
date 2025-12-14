#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)141;
long long int var_8 = -1535889706925961717LL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)233;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 48428214416880065ULL;
int zero = 0;
unsigned long long int var_15 = 2414978981161706534ULL;
signed char var_16 = (signed char)-67;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
