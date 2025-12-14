#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25083;
short var_1 = (short)24029;
unsigned short var_3 = (unsigned short)15942;
unsigned char var_4 = (unsigned char)249;
unsigned short var_5 = (unsigned short)38350;
unsigned short var_6 = (unsigned short)28114;
unsigned short var_7 = (unsigned short)28188;
unsigned long long int var_8 = 8995709985394747688ULL;
short var_9 = (short)-21527;
_Bool var_10 = (_Bool)1;
short var_11 = (short)22702;
unsigned long long int var_12 = 17259661516843528314ULL;
short var_14 = (short)-17180;
short var_15 = (short)-19290;
short var_17 = (short)2001;
signed char var_19 = (signed char)-104;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10830581492127580372ULL;
signed char var_22 = (signed char)-11;
unsigned char var_23 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
