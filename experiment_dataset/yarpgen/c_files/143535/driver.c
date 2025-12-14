#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)184;
short var_3 = (short)-29441;
long long int var_5 = 2402541230472344306LL;
unsigned int var_6 = 243580723U;
unsigned short var_7 = (unsigned short)23777;
unsigned char var_8 = (unsigned char)163;
unsigned long long int var_10 = 15663638058634942644ULL;
int var_11 = -2063124630;
int zero = 0;
unsigned int var_13 = 2268232560U;
unsigned long long int var_14 = 15593592236142437223ULL;
long long int var_15 = 9164779729825783711LL;
short var_16 = (short)-20708;
unsigned int var_17 = 169882137U;
unsigned int var_18 = 275532238U;
unsigned char var_19 = (unsigned char)98;
unsigned char var_20 = (unsigned char)169;
short var_21 = (short)-4331;
long long int var_22 = 6193386832244610591LL;
unsigned short var_23 = (unsigned short)62553;
unsigned long long int var_24 = 10435051638679381386ULL;
unsigned char var_25 = (unsigned char)219;
int arr_4 [20] ;
unsigned int arr_5 [20] [20] ;
_Bool arr_11 [20] [20] [20] ;
unsigned short arr_16 [22] [22] ;
unsigned long long int arr_22 [22] [22] [22] ;
unsigned long long int arr_23 [22] [22] ;
_Bool arr_26 [18] [18] ;
unsigned int arr_8 [20] ;
int arr_9 [20] ;
int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 39180301 : -148349276;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 365550806U : 3413719234U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44690 : (unsigned short)63702;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8192308272451800117ULL : 11310130313638595111ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = 967967551503214549ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 4119527079U : 2756761849U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -2053912750 : -1674566464;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 992814336 : 1854066695;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
