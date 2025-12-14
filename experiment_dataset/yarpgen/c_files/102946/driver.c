#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3258791609721954895LL;
long long int var_1 = -2581565893278859199LL;
long long int var_2 = -5113810594619341595LL;
unsigned int var_4 = 1412928263U;
unsigned char var_5 = (unsigned char)29;
short var_6 = (short)-11610;
short var_7 = (short)12637;
unsigned char var_8 = (unsigned char)201;
short var_9 = (short)30744;
unsigned int var_10 = 1798462602U;
short var_11 = (short)13789;
unsigned int var_12 = 2756496924U;
unsigned int var_13 = 1346010012U;
short var_15 = (short)15027;
int zero = 0;
unsigned int var_16 = 3213271822U;
short var_17 = (short)-8322;
long long int var_18 = -3200248466300154525LL;
unsigned char var_19 = (unsigned char)96;
short var_20 = (short)16881;
unsigned int var_21 = 922420854U;
unsigned char var_22 = (unsigned char)95;
short var_23 = (short)16873;
short var_24 = (short)-28675;
long long int var_25 = -8840824753173254690LL;
unsigned int var_26 = 3178916372U;
unsigned int var_27 = 2156853058U;
short var_28 = (short)26890;
short var_29 = (short)-26483;
unsigned int arr_0 [21] [21] ;
unsigned int arr_4 [14] ;
short arr_8 [13] [13] ;
unsigned int arr_10 [13] ;
unsigned int arr_12 [13] [13] [13] [13] ;
unsigned int arr_16 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_20 [25] ;
short arr_21 [25] ;
short arr_18 [13] [13] [13] ;
unsigned int arr_19 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3514087710U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2147502687U : 88314171U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)8341;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 3752172849U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 1723042940U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 494137991U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 203604184U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (short)-30929;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)31627;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2492094142U;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
