#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14082237353249704259ULL;
unsigned int var_2 = 1115676180U;
unsigned char var_3 = (unsigned char)2;
unsigned long long int var_5 = 9197215069715504406ULL;
int var_6 = 981107143;
unsigned char var_7 = (unsigned char)76;
short var_9 = (short)17994;
unsigned short var_10 = (unsigned short)50651;
unsigned int var_11 = 1788586950U;
unsigned short var_13 = (unsigned short)9810;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)205;
unsigned int var_17 = 101046367U;
short var_18 = (short)3061;
unsigned char var_19 = (unsigned char)160;
unsigned long long int var_20 = 4945827361233525850ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
