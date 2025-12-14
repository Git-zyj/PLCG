#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18783;
unsigned int var_1 = 2912758957U;
short var_2 = (short)24830;
unsigned long long int var_4 = 3614534407113850209ULL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9461383070270777107ULL;
unsigned long long int var_9 = 18023661498036850801ULL;
unsigned long long int var_10 = 3819113142139908047ULL;
unsigned long long int var_11 = 17067361671778186003ULL;
unsigned int var_12 = 2619559873U;
unsigned long long int var_14 = 10851643232628799247ULL;
int zero = 0;
short var_16 = (short)19276;
unsigned long long int var_17 = 6648922451044539486ULL;
int var_18 = 388620181;
unsigned int var_19 = 1935409301U;
unsigned int var_20 = 1716161205U;
short var_21 = (short)10027;
int var_22 = 695549866;
short var_23 = (short)-17634;
unsigned long long int var_24 = 5052049695813074768ULL;
int var_25 = 1756900700;
unsigned int arr_0 [13] ;
_Bool arr_1 [13] [13] ;
int arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
unsigned int arr_4 [20] ;
short arr_6 [20] [20] ;
unsigned short arr_7 [20] [20] ;
_Bool arr_8 [20] ;
_Bool arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4166696668U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1101222847;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)7005;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 607264651U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)20856;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)38436;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
