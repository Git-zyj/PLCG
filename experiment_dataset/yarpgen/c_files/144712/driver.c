#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned long long int var_2 = 17636381025998770320ULL;
long long int var_4 = 7049020822223027277LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 13421544470750510003ULL;
long long int var_10 = 2769383309941507155LL;
_Bool var_11 = (_Bool)0;
int var_13 = 744015225;
unsigned int var_14 = 1376580999U;
unsigned long long int var_16 = 5940720250302251634ULL;
int zero = 0;
unsigned int var_18 = 4011300603U;
int var_19 = -1794660591;
long long int var_20 = 1060414654005690488LL;
unsigned long long int var_21 = 14027145099460011782ULL;
unsigned short var_22 = (unsigned short)45150;
int var_23 = 868941667;
long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned short arr_6 [14] [14] ;
short arr_7 [14] [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] [14] ;
long long int arr_11 [14] ;
unsigned int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 7325037278928148305LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1692714146338255997ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)63323;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)17633;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 10183417870172933666ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -3307289264043652819LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 197888375U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
