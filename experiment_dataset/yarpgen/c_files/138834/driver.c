#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3729863870U;
unsigned long long int var_1 = 8683635282182401072ULL;
short var_2 = (short)16344;
unsigned char var_3 = (unsigned char)75;
unsigned char var_5 = (unsigned char)104;
unsigned int var_6 = 3495064588U;
signed char var_7 = (signed char)10;
unsigned short var_8 = (unsigned short)47803;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1726483639U;
unsigned int var_12 = 2005067806U;
unsigned char var_13 = (unsigned char)142;
unsigned char var_15 = (unsigned char)170;
short var_16 = (short)6456;
int zero = 0;
unsigned long long int var_17 = 8398853035731456328ULL;
unsigned int var_18 = 1517931443U;
int var_19 = -233586161;
long long int var_20 = 4330710359192348252LL;
unsigned short var_21 = (unsigned short)61679;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
