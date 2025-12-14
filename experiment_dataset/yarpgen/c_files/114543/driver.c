#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)648;
_Bool var_5 = (_Bool)0;
int var_7 = 959205987;
unsigned short var_8 = (unsigned short)63062;
unsigned char var_10 = (unsigned char)247;
short var_11 = (short)19784;
unsigned short var_14 = (unsigned short)33624;
unsigned short var_15 = (unsigned short)62261;
int zero = 0;
signed char var_16 = (signed char)113;
unsigned short var_17 = (unsigned short)39010;
short var_18 = (short)-6994;
unsigned short var_19 = (unsigned short)39479;
long long int var_20 = -2069234918721283082LL;
int var_21 = -424257836;
int var_22 = -1940757751;
unsigned char var_23 = (unsigned char)181;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)134;
long long int var_26 = -8600843538046536460LL;
long long int var_27 = -107585531075721524LL;
_Bool arr_2 [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
short arr_5 [22] ;
long long int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1594349010U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-21689 : (short)-1766;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -7955335915031356599LL : -3418503778964979342LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
