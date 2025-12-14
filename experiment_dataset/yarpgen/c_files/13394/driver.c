#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7141;
unsigned int var_1 = 2799505539U;
long long int var_4 = 3559188330894892726LL;
unsigned int var_6 = 1374102840U;
signed char var_8 = (signed char)-101;
unsigned long long int var_11 = 4201214587627525096ULL;
unsigned short var_12 = (unsigned short)58072;
unsigned short var_13 = (unsigned short)57115;
unsigned long long int var_14 = 5710570351165471517ULL;
unsigned char var_15 = (unsigned char)186;
unsigned short var_16 = (unsigned short)34982;
int zero = 0;
short var_17 = (short)30037;
unsigned int var_18 = 3121366413U;
long long int var_19 = 9212772156411180107LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
