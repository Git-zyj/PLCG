#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1981649610;
unsigned char var_1 = (unsigned char)3;
unsigned char var_4 = (unsigned char)210;
signed char var_5 = (signed char)75;
short var_6 = (short)6390;
short var_7 = (short)1956;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-3858;
unsigned short var_10 = (unsigned short)64003;
signed char var_11 = (signed char)-46;
int var_12 = 1899373052;
int zero = 0;
long long int var_14 = 5309093480179822509LL;
short var_15 = (short)19092;
unsigned short var_16 = (unsigned short)5285;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
