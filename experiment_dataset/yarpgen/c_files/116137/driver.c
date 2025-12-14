#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -220629250;
short var_1 = (short)27416;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)148;
unsigned short var_5 = (unsigned short)31575;
int var_7 = -1911943016;
signed char var_8 = (signed char)-35;
short var_10 = (short)-9021;
int zero = 0;
short var_11 = (short)2315;
unsigned char var_12 = (unsigned char)121;
signed char var_13 = (signed char)41;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)34076;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
