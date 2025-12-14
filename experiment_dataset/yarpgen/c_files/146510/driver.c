#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
signed char var_3 = (signed char)-121;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)111;
unsigned long long int var_7 = 7469227242314127483ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)44;
unsigned long long int var_11 = 3324113065023493351ULL;
int zero = 0;
int var_12 = -1549487412;
unsigned int var_13 = 3309414940U;
int var_14 = 142116528;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2378415081U;
int var_17 = 76857002;
unsigned int var_18 = 3964526596U;
unsigned short var_19 = (unsigned short)23682;
unsigned short var_20 = (unsigned short)47935;
unsigned short arr_0 [18] ;
unsigned short arr_1 [18] ;
int arr_5 [17] ;
unsigned int arr_6 [17] ;
unsigned int arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)54984;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)47685;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 364284724;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3602708497U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 985583043U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
