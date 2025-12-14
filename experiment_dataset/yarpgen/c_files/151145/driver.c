#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1834584379;
long long int var_1 = -4269362463771050498LL;
int var_2 = 415783343;
signed char var_3 = (signed char)46;
int var_4 = -1526149730;
signed char var_8 = (signed char)-9;
int var_9 = 1510406582;
int var_10 = -448318088;
long long int var_12 = -2017940100030850611LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)23226;
short var_15 = (short)-16700;
int var_16 = 886881265;
unsigned char var_17 = (unsigned char)218;
int var_18 = 1399050886;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
