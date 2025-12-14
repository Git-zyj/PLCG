#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 593441138U;
long long int var_1 = -2475112345792648394LL;
unsigned long long int var_2 = 6653050399755149239ULL;
unsigned short var_3 = (unsigned short)44915;
long long int var_4 = -8218407570765813402LL;
unsigned short var_5 = (unsigned short)47209;
unsigned char var_6 = (unsigned char)24;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)3189;
unsigned int var_9 = 2519016763U;
int zero = 0;
unsigned char var_10 = (unsigned char)216;
long long int var_11 = -971632140669383263LL;
unsigned int var_12 = 551741295U;
unsigned char var_13 = (unsigned char)228;
unsigned int var_14 = 462829860U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
