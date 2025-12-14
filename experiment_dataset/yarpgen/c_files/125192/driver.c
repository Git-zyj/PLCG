#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2965314093U;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)2941;
signed char var_7 = (signed char)-5;
long long int var_8 = 1937919086295287034LL;
unsigned long long int var_9 = 14312312561580692616ULL;
unsigned short var_10 = (unsigned short)48808;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-29;
signed char var_14 = (signed char)118;
long long int var_15 = -4862537099611892158LL;
unsigned long long int var_17 = 9181633258323472828ULL;
signed char var_18 = (signed char)93;
int zero = 0;
short var_20 = (short)-14582;
long long int var_21 = 1043724952726939945LL;
unsigned short var_22 = (unsigned short)12067;
short var_23 = (short)-21088;
long long int var_24 = -2023085852971846473LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
