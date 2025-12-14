#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_1 = 15777814768766252380ULL;
short var_2 = (short)-10574;
signed char var_3 = (signed char)89;
unsigned long long int var_4 = 430876153412603117ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_11 = (short)14197;
short var_12 = (short)28408;
signed char var_14 = (signed char)1;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
unsigned long long int var_16 = 3340818232325466571ULL;
unsigned long long int var_17 = 948126132900299196ULL;
unsigned long long int var_18 = 2003567641750540425ULL;
unsigned long long int var_19 = 11686704853451001894ULL;
unsigned short var_20 = (unsigned short)17295;
unsigned long long int var_21 = 11233534121922244211ULL;
unsigned short var_22 = (unsigned short)37535;
int var_23 = 1252445046;
int var_24 = -842201404;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 10926752080584398279ULL;
unsigned long long int var_27 = 17822890439656868753ULL;
unsigned long long int var_28 = 6981226425474849316ULL;
unsigned int arr_0 [20] [20] ;
long long int arr_1 [20] ;
short arr_2 [20] ;
short arr_4 [20] [20] [20] ;
int arr_5 [20] [20] [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
short arr_9 [20] ;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3889628980U : 2647126726U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1139193465457757125LL : 7184766600869124587LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-14534 : (short)26750;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)12188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1796790815 : -66646585;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)-18458;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -2075888815 : -1208256314;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
