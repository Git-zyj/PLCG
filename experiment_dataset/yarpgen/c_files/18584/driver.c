#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10959;
unsigned char var_5 = (unsigned char)5;
_Bool var_6 = (_Bool)0;
long long int var_8 = 2010571326739048578LL;
unsigned char var_9 = (unsigned char)187;
unsigned long long int var_10 = 13479490276378235540ULL;
int zero = 0;
long long int var_17 = 8664593721478799813LL;
short var_18 = (short)8605;
long long int var_19 = -6669050642237443106LL;
unsigned short var_20 = (unsigned short)2372;
signed char arr_0 [16] ;
unsigned short arr_2 [16] ;
short arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
unsigned short arr_5 [16] [16] ;
unsigned char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)49317;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)27257;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1177169253U : 1938106863U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62439 : (unsigned short)57313;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)75;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
