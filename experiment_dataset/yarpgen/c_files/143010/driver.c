#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2086607739;
signed char var_1 = (signed char)-25;
int var_2 = 919106155;
long long int var_3 = -2729073823367704676LL;
long long int var_4 = -6135117381744727620LL;
long long int var_5 = -4991553181280903171LL;
unsigned char var_7 = (unsigned char)148;
int var_9 = 928168915;
int var_10 = 1585279151;
_Bool var_11 = (_Bool)0;
int var_12 = -1813984402;
int var_13 = -484826377;
unsigned char var_14 = (unsigned char)140;
int var_15 = -577943362;
int zero = 0;
signed char var_16 = (signed char)-122;
long long int var_17 = -4976441363804862595LL;
int var_18 = 1174557579;
signed char var_19 = (signed char)37;
unsigned int arr_1 [20] ;
signed char arr_2 [20] [20] ;
unsigned char arr_3 [20] ;
unsigned int arr_5 [20] [20] ;
long long int arr_7 [20] [20] [20] ;
unsigned char arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1634107155U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)54;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 757199707U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4004661902132186248LL : 5194564875577823693LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)158 : (unsigned char)75;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
