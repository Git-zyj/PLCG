#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3618691187328277790ULL;
unsigned short var_2 = (unsigned short)23182;
unsigned char var_4 = (unsigned char)70;
short var_5 = (short)-24612;
_Bool var_7 = (_Bool)1;
long long int var_9 = 2471287162351965095LL;
unsigned int var_11 = 1906202268U;
int var_12 = 740648549;
int zero = 0;
int var_14 = -289776650;
long long int var_15 = 1556054647054083075LL;
signed char var_16 = (signed char)-67;
short var_17 = (short)-28059;
int var_18 = -292001999;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)69 : (unsigned char)43;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
