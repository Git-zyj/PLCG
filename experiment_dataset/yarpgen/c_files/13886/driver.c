#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 458847570;
short var_2 = (short)-31831;
unsigned long long int var_3 = 15358607473911782632ULL;
unsigned int var_5 = 1188189170U;
unsigned char var_6 = (unsigned char)102;
signed char var_7 = (signed char)-100;
long long int var_8 = -7615302261913827997LL;
signed char var_10 = (signed char)22;
unsigned long long int var_11 = 3153737255970829193ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)5659;
int zero = 0;
unsigned int var_14 = 2870467750U;
int var_15 = 682772074;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
