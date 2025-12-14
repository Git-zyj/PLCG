#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4945272362883942041LL;
short var_1 = (short)9685;
unsigned long long int var_2 = 12417407783088950797ULL;
unsigned short var_3 = (unsigned short)29096;
unsigned short var_4 = (unsigned short)47635;
unsigned short var_6 = (unsigned short)65384;
long long int var_7 = 1005794287142221444LL;
unsigned short var_8 = (unsigned short)45788;
long long int var_9 = -1413668810705770497LL;
short var_10 = (short)10864;
int zero = 0;
unsigned long long int var_11 = 948007856710293599ULL;
signed char var_12 = (signed char)4;
signed char var_13 = (signed char)32;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1383432805121810461ULL;
unsigned short var_16 = (unsigned short)60829;
long long int var_17 = 4048856417407938516LL;
long long int var_18 = -2867346659427527759LL;
unsigned char var_19 = (unsigned char)241;
unsigned long long int var_20 = 7208928111871844806ULL;
int var_21 = -1906403190;
int var_22 = 1207506817;
short var_23 = (short)13950;
unsigned int var_24 = 2876434082U;
unsigned short var_25 = (unsigned short)63640;
unsigned long long int var_26 = 2022932776427905197ULL;
short arr_0 [14] ;
unsigned long long int arr_3 [11] [11] ;
unsigned char arr_4 [11] ;
short arr_6 [11] ;
long long int arr_14 [17] [17] ;
unsigned char arr_15 [25] ;
signed char arr_20 [25] ;
unsigned long long int arr_21 [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] [25] ;
_Bool arr_24 [25] [25] [25] ;
unsigned long long int arr_25 [25] [25] [25] [25] ;
unsigned short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)9823;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 10793066538851739987ULL : 13530802971772738306ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-31832;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -8093038032580816338LL : -958845053081007120LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 7161621952344772229ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7365071516103375868ULL : 1452705668634584857ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 7613921795446524767ULL : 4755897158473592684ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37659;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
