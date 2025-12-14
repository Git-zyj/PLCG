#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6929202739703409711LL;
unsigned short var_2 = (unsigned short)27697;
int var_3 = 1713523181;
unsigned short var_4 = (unsigned short)51112;
unsigned int var_5 = 2628930807U;
_Bool var_7 = (_Bool)1;
short var_8 = (short)32275;
unsigned char var_9 = (unsigned char)54;
int zero = 0;
short var_10 = (short)785;
int var_11 = 1151600654;
int var_12 = -653969432;
long long int var_13 = -392915659514868118LL;
int var_14 = 454861618;
unsigned int var_15 = 3514863103U;
short arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-20644;
}

void checksum() {
    hash(&seed, var_10);
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
