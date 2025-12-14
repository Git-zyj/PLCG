#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16823043599042241092ULL;
unsigned char var_3 = (unsigned char)13;
signed char var_5 = (signed char)119;
long long int var_8 = 8214484496747368686LL;
long long int var_11 = 7580392592964364443LL;
signed char var_12 = (signed char)-38;
unsigned short var_14 = (unsigned short)13703;
int zero = 0;
unsigned char var_15 = (unsigned char)223;
int var_16 = -1061846387;
long long int var_17 = -260922163929884438LL;
int var_18 = 592327971;
signed char var_19 = (signed char)68;
long long int var_20 = -2646643757125660703LL;
long long int arr_0 [11] ;
_Bool arr_1 [11] ;
short arr_5 [12] ;
unsigned int arr_6 [12] ;
long long int arr_2 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -4631732347834096891LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)2872;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 819128115U : 4077365621U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5867461251308638323LL : 4718687069762487011LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7016219976338749986LL : -2574070208273181637LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 7804897366756073589ULL : 7566651252276315292ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
