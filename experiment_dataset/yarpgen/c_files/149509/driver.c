#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26351;
signed char var_1 = (signed char)63;
unsigned short var_2 = (unsigned short)32280;
_Bool var_3 = (_Bool)1;
short var_5 = (short)3050;
long long int var_6 = 6221182387056556022LL;
long long int var_8 = 494750929343724785LL;
unsigned char var_10 = (unsigned char)139;
unsigned char var_12 = (unsigned char)243;
short var_13 = (short)-5007;
int zero = 0;
unsigned short var_14 = (unsigned short)9290;
short var_15 = (short)-10606;
int var_16 = -1492093681;
unsigned short var_17 = (unsigned short)42738;
long long int var_18 = 4239076905824035755LL;
unsigned int var_19 = 839828415U;
short var_20 = (short)11741;
unsigned short var_21 = (unsigned short)16831;
short var_22 = (short)12718;
long long int arr_1 [13] ;
short arr_4 [14] [14] ;
unsigned short arr_9 [14] [14] [14] ;
unsigned short arr_13 [14] [14] [14] ;
_Bool arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -2213010880286613756LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)1546;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)7238 : (unsigned short)27008;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)49688 : (unsigned short)14967;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
