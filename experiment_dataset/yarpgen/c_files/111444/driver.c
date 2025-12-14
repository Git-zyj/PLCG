#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned char var_2 = (unsigned char)202;
signed char var_4 = (signed char)41;
unsigned char var_6 = (unsigned char)166;
unsigned int var_7 = 2941946873U;
long long int var_8 = -6374836026124621953LL;
unsigned char var_9 = (unsigned char)150;
unsigned char var_11 = (unsigned char)143;
signed char var_12 = (signed char)8;
long long int var_13 = 3660071339341793227LL;
int zero = 0;
unsigned int var_14 = 3102996744U;
long long int var_15 = 2893936827006607401LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8918501156701860548LL;
int var_18 = -661807748;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-30;
unsigned long long int var_21 = 15336097184013063981ULL;
unsigned char var_22 = (unsigned char)152;
long long int var_23 = -7192067745160977729LL;
signed char var_24 = (signed char)-66;
unsigned long long int var_25 = 7172778452703806684ULL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)682;
int arr_3 [18] [18] [18] ;
unsigned long long int arr_5 [20] [20] ;
_Bool arr_6 [20] [20] ;
int arr_8 [20] [20] [20] ;
short arr_9 [20] ;
signed char arr_10 [20] [20] [20] ;
short arr_16 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1358572797;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 14670694718088957100ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1145818055;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)-3219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)-3069;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
