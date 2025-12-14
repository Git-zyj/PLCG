#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16902;
short var_2 = (short)18391;
long long int var_3 = -8251290356286187755LL;
signed char var_4 = (signed char)15;
unsigned short var_5 = (unsigned short)43545;
unsigned int var_6 = 1579803000U;
_Bool var_7 = (_Bool)1;
int var_8 = -1664309852;
unsigned int var_9 = 3664169288U;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned char var_11 = (unsigned char)117;
long long int var_12 = 2244921078410969555LL;
long long int var_13 = -8743938271708321420LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
