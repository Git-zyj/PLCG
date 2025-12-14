#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-30072;
int var_8 = 1912332466;
int var_10 = -961981713;
signed char var_13 = (signed char)101;
unsigned char var_14 = (unsigned char)248;
short var_17 = (short)-20580;
int zero = 0;
short var_18 = (short)-9666;
int var_19 = 2047951141;
unsigned short var_20 = (unsigned short)10675;
unsigned short var_21 = (unsigned short)3952;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
