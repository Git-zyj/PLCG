#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)152;
int var_3 = 1994059152;
unsigned char var_4 = (unsigned char)7;
_Bool var_10 = (_Bool)1;
short var_14 = (short)-28822;
unsigned char var_16 = (unsigned char)244;
int zero = 0;
unsigned short var_17 = (unsigned short)4375;
unsigned short var_18 = (unsigned short)2850;
unsigned char var_19 = (unsigned char)141;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)172;
long long int var_22 = 8117653354678869902LL;
_Bool arr_1 [16] [16] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] ;
short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7208 : (unsigned short)1490;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -4661407330740324764LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-7280 : (short)-18863;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
