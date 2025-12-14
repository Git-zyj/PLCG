#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8076;
int var_6 = 1369972131;
unsigned char var_9 = (unsigned char)198;
unsigned long long int var_10 = 7189697092684352998ULL;
int zero = 0;
long long int var_12 = 4721351836757080093LL;
unsigned short var_13 = (unsigned short)15874;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)22204;
short var_16 = (short)8344;
unsigned short var_17 = (unsigned short)50478;
short var_18 = (short)9314;
unsigned short arr_1 [20] [20] ;
unsigned char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30916 : (unsigned short)38766;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
