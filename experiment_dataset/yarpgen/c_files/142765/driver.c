#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)182;
long long int var_4 = 4735263607785513290LL;
unsigned short var_5 = (unsigned short)42685;
unsigned char var_6 = (unsigned char)84;
unsigned short var_7 = (unsigned short)64417;
unsigned char var_10 = (unsigned char)197;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2911547370U;
int var_18 = 1027245845;
signed char var_19 = (signed char)107;
short var_20 = (short)16531;
unsigned short var_21 = (unsigned short)13691;
unsigned char arr_0 [13] ;
long long int arr_1 [13] ;
_Bool arr_5 [25] ;
unsigned int arr_6 [25] ;
long long int arr_7 [25] ;
signed char arr_8 [25] ;
long long int arr_9 [25] ;
long long int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
unsigned char arr_4 [13] ;
short arr_11 [25] [25] ;
long long int arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1404516530289466758LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2899846208U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -5225052601117557059LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -1548223946601472961LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 6332676525882295227LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)31125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18399 : (short)4647;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -8100254114426976387LL : 8617011919317590844LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
