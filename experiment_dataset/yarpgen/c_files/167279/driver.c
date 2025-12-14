#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1698;
_Bool var_3 = (_Bool)0;
int var_5 = 650146875;
short var_7 = (short)2288;
unsigned long long int var_8 = 4794556150836581040ULL;
unsigned int var_9 = 3167622361U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1010176256U;
signed char var_12 = (signed char)-11;
unsigned long long int var_13 = 7865363288460062514ULL;
unsigned int var_14 = 1633552885U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)2498;
unsigned short var_17 = (unsigned short)30059;
unsigned short var_18 = (unsigned short)977;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7933;
long long int var_21 = 2965083315266957885LL;
unsigned char var_22 = (unsigned char)153;
unsigned long long int var_23 = 4975596407311804102ULL;
unsigned short arr_1 [13] [13] ;
short arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned int arr_4 [25] ;
signed char arr_7 [23] ;
short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)12335;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)12614;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1640153410U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1482554019U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)9700;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
