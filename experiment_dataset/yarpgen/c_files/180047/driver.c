#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3445814074U;
unsigned long long int var_2 = 12020397428403064902ULL;
signed char var_3 = (signed char)103;
unsigned int var_4 = 1284073251U;
signed char var_5 = (signed char)-83;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3482746785U;
unsigned char var_9 = (unsigned char)250;
unsigned long long int var_13 = 14740656810692745092ULL;
unsigned char var_15 = (unsigned char)25;
signed char var_16 = (signed char)85;
unsigned long long int var_17 = 1692614720049896209ULL;
int zero = 0;
signed char var_18 = (signed char)-127;
unsigned long long int var_19 = 15328763113414022335ULL;
unsigned int var_20 = 4045714282U;
int var_21 = 1067386218;
unsigned char var_22 = (unsigned char)31;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 14092153719103492608ULL;
unsigned long long int var_25 = 4334077841345307084ULL;
unsigned char var_26 = (unsigned char)156;
unsigned int var_27 = 971606355U;
unsigned int var_28 = 2840398756U;
unsigned long long int var_29 = 3696735953380624829ULL;
signed char var_30 = (signed char)108;
unsigned long long int arr_2 [14] [14] ;
int arr_3 [14] [14] [14] ;
unsigned char arr_4 [14] ;
unsigned int arr_5 [14] ;
unsigned long long int arr_6 [14] [14] ;
signed char arr_7 [14] ;
unsigned int arr_8 [14] ;
signed char arr_10 [14] [14] ;
_Bool arr_11 [14] [14] [14] ;
int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 16691375050362443189ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -583389069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 3174307252U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 18267039452109162159ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1000476961U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 1582119091;
}

void checksum() {
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
