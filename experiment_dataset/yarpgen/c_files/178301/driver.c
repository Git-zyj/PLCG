#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
long long int var_1 = 1708099096778261547LL;
long long int var_2 = 2978925796186857633LL;
unsigned long long int var_3 = 1016421321892410787ULL;
long long int var_4 = 350006896496909186LL;
signed char var_5 = (signed char)-49;
unsigned long long int var_6 = 4328530871477741035ULL;
unsigned short var_7 = (unsigned short)6410;
short var_10 = (short)-288;
int var_11 = 1095893792;
int var_12 = -2056208290;
int zero = 0;
unsigned char var_14 = (unsigned char)180;
unsigned long long int var_15 = 13722741730296670648ULL;
short var_16 = (short)-32167;
_Bool var_17 = (_Bool)0;
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
