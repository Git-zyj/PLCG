#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21407;
unsigned long long int var_5 = 12379498506682832645ULL;
unsigned int var_8 = 3934433027U;
unsigned short var_9 = (unsigned short)45806;
int var_11 = -1940548691;
unsigned char var_12 = (unsigned char)102;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-114;
unsigned int var_15 = 4059150145U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)55637;
signed char var_18 = (signed char)73;
unsigned short var_19 = (unsigned short)60515;
unsigned short var_20 = (unsigned short)45002;
unsigned char var_21 = (unsigned char)101;
unsigned short var_22 = (unsigned short)52805;
signed char var_23 = (signed char)116;
unsigned char var_24 = (unsigned char)137;
signed char var_25 = (signed char)7;
unsigned short var_26 = (unsigned short)58944;
unsigned short var_27 = (unsigned short)41776;
unsigned short var_28 = (unsigned short)13119;
int arr_0 [21] ;
unsigned short arr_1 [21] ;
int arr_2 [23] ;
int arr_3 [23] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1239156790;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)1296;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 889032413;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1763448985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49137;
}

void checksum() {
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
