#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1966830497335336047LL;
long long int var_1 = -4659912066139706063LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)209;
unsigned int var_4 = 1678889033U;
short var_5 = (short)19171;
unsigned char var_6 = (unsigned char)17;
unsigned char var_7 = (unsigned char)209;
unsigned short var_8 = (unsigned short)46716;
unsigned char var_9 = (unsigned char)109;
long long int var_10 = -3431486059229972055LL;
unsigned char var_11 = (unsigned char)232;
unsigned short var_12 = (unsigned short)18689;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-9407;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)72;
int zero = 0;
unsigned long long int var_17 = 5785382144035533375ULL;
unsigned long long int var_18 = 3650436868889871785ULL;
unsigned int var_19 = 1670147154U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
