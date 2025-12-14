#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53181;
long long int var_1 = 8326121485658008539LL;
unsigned short var_4 = (unsigned short)34772;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 194292563U;
unsigned int var_8 = 1255321894U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_14 = (short)872;
unsigned short var_15 = (unsigned short)56448;
int zero = 0;
unsigned short var_16 = (unsigned short)3715;
unsigned short var_17 = (unsigned short)61865;
unsigned short var_18 = (unsigned short)31069;
unsigned char var_19 = (unsigned char)8;
unsigned char var_20 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
