#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 381032339U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)45180;
int var_5 = 1716591239;
unsigned long long int var_6 = 18242193583393740379ULL;
unsigned short var_7 = (unsigned short)12523;
unsigned char var_8 = (unsigned char)174;
unsigned char var_10 = (unsigned char)1;
int var_11 = 751472647;
short var_12 = (short)17257;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -209409627;
unsigned long long int var_16 = 16048310516940001839ULL;
int var_17 = -2061049567;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-7596;
unsigned int var_20 = 1675162033U;
signed char var_21 = (signed char)29;
unsigned short var_22 = (unsigned short)10474;
_Bool var_23 = (_Bool)1;
short var_24 = (short)22525;
short var_25 = (short)13360;
unsigned int var_26 = 417599770U;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)181;
unsigned char arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
signed char arr_5 [17] [17] ;
unsigned char arr_7 [24] ;
unsigned char arr_9 [24] ;
unsigned char arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31399 : (short)-8722;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 4118009179U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)43;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
