#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
short var_3 = (short)-18504;
signed char var_5 = (signed char)-19;
long long int var_6 = -202841207854454345LL;
unsigned char var_11 = (unsigned char)179;
short var_13 = (short)16185;
unsigned int var_14 = 3060256129U;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5074107322082261291LL;
int zero = 0;
unsigned short var_20 = (unsigned short)5582;
int var_21 = 1428784692;
void init() {
}

void checksum() {
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
