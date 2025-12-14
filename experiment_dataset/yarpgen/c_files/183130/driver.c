#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1109614729U;
unsigned int var_7 = 3389686246U;
int var_11 = -455082708;
long long int var_12 = -4540274133134205893LL;
signed char var_14 = (signed char)43;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 63769115063140265ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)25279;
long long int var_19 = 7275851084543753786LL;
unsigned short var_20 = (unsigned short)32868;
_Bool var_21 = (_Bool)0;
int var_22 = 1920641544;
long long int var_23 = -6772695489542689440LL;
unsigned char var_24 = (unsigned char)244;
unsigned char var_25 = (unsigned char)112;
unsigned short var_26 = (unsigned short)2060;
short var_27 = (short)-15852;
unsigned short arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
_Bool arr_3 [10] ;
_Bool arr_4 [10] ;
short arr_9 [10] [10] [10] ;
int arr_12 [10] [10] ;
unsigned short arr_13 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_17 [18] ;
unsigned char arr_18 [18] [18] ;
long long int arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)16586;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 10071723063361393091ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-10611;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = -900226728;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)52844;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 5696619170275321310LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
