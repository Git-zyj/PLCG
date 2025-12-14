#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -754957637;
unsigned int var_1 = 2039515428U;
short var_2 = (short)-14950;
unsigned char var_3 = (unsigned char)171;
int var_5 = 1262507880;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 922473238U;
unsigned short var_12 = (unsigned short)40059;
unsigned short var_13 = (unsigned short)50753;
unsigned long long int var_15 = 13072038314878681720ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)11652;
unsigned int var_17 = 1874294482U;
unsigned int var_18 = 2618308298U;
unsigned int var_19 = 612028456U;
int var_20 = 57090105;
unsigned short var_21 = (unsigned short)11041;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)210;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
