#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned long long int var_2 = 14342796142495007305ULL;
short var_6 = (short)-26540;
unsigned char var_10 = (unsigned char)48;
unsigned int var_11 = 2629099292U;
unsigned int var_15 = 274555801U;
unsigned char var_18 = (unsigned char)74;
unsigned int var_19 = 4233441309U;
int zero = 0;
short var_20 = (short)11348;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)13;
short var_23 = (short)10710;
unsigned short var_24 = (unsigned short)25678;
unsigned int var_25 = 3512288621U;
int var_26 = -1827717730;
unsigned char var_27 = (unsigned char)165;
unsigned char var_28 = (unsigned char)205;
int var_29 = 133563643;
unsigned int var_30 = 2764684541U;
short arr_0 [18] ;
unsigned short arr_1 [18] [18] ;
unsigned char arr_3 [18] [18] ;
_Bool arr_4 [20] [20] ;
unsigned short arr_5 [20] ;
unsigned long long int arr_7 [25] [25] ;
short arr_8 [25] ;
signed char arr_9 [25] [25] [25] ;
unsigned long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-418;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)49184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)17056;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 149817634951278061ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-26872;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 17216534724974809362ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
