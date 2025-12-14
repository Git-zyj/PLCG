#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)95;
signed char var_6 = (signed char)-125;
short var_13 = (short)28065;
unsigned short var_14 = (unsigned short)36488;
unsigned short var_15 = (unsigned short)43797;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)2619;
unsigned long long int var_19 = 194192089840914915ULL;
unsigned long long int var_20 = 12407434719444959516ULL;
unsigned short var_21 = (unsigned short)15794;
unsigned long long int var_22 = 6930286114112241857ULL;
unsigned short var_23 = (unsigned short)18447;
unsigned int var_24 = 4119570665U;
short arr_0 [11] [11] ;
unsigned long long int arr_1 [11] [11] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)16204;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 7355785143654790960ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1073751769 : 1048382654;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
