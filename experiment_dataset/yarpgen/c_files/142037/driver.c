#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3056450562328532103LL;
unsigned short var_3 = (unsigned short)9175;
short var_4 = (short)7488;
unsigned short var_6 = (unsigned short)3286;
unsigned short var_9 = (unsigned short)45061;
_Bool var_10 = (_Bool)0;
short var_11 = (short)212;
unsigned char var_13 = (unsigned char)60;
long long int var_14 = -3702451611477726265LL;
int zero = 0;
unsigned short var_15 = (unsigned short)24169;
short var_16 = (short)9067;
unsigned char var_17 = (unsigned char)236;
int var_18 = -1784102306;
void init() {
}

void checksum() {
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
