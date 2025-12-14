#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17304978290074814001ULL;
unsigned long long int var_3 = 14773557723841848155ULL;
unsigned short var_4 = (unsigned short)12955;
short var_5 = (short)25506;
unsigned int var_6 = 1175937117U;
signed char var_8 = (signed char)19;
int zero = 0;
unsigned long long int var_10 = 14210260374876750309ULL;
signed char var_11 = (signed char)50;
short var_12 = (short)-17335;
unsigned long long int var_13 = 17468420263985165081ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)47;
unsigned char var_16 = (unsigned char)247;
signed char var_17 = (signed char)38;
unsigned char arr_5 [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13616834240773121800ULL : 15915353989321300715ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
