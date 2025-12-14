#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2939093753007648494LL;
signed char var_2 = (signed char)-92;
unsigned long long int var_3 = 458301539184673402ULL;
unsigned long long int var_5 = 13625916106222235843ULL;
unsigned char var_6 = (unsigned char)206;
int var_12 = 2071367482;
unsigned short var_17 = (unsigned short)45637;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 16675259005646342995ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-29537;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
int var_24 = -2071898298;
int var_25 = -1820364795;
unsigned short var_26 = (unsigned short)57781;
unsigned int var_27 = 1076353643U;
unsigned long long int var_28 = 5600659979871941777ULL;
short var_29 = (short)-8760;
_Bool var_30 = (_Bool)0;
short var_31 = (short)18782;
signed char var_32 = (signed char)60;
_Bool var_33 = (_Bool)0;
unsigned long long int var_34 = 7904944947537009022ULL;
short var_35 = (short)5912;
short arr_2 [18] ;
unsigned char arr_3 [25] [25] ;
short arr_5 [25] ;
unsigned char arr_7 [25] [25] ;
signed char arr_8 [25] [25] ;
short arr_10 [25] [25] [25] ;
short arr_11 [25] [25] [25] [25] ;
short arr_16 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)4737;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-21718;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-5651;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)17788 : (short)-7933;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)22369;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
