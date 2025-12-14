#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)8958;
unsigned long long int var_5 = 5244837599832391959ULL;
signed char var_7 = (signed char)-5;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1531413737U;
unsigned int var_14 = 1970822124U;
unsigned long long int var_15 = 16837695421040665360ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 4014455685U;
int zero = 0;
unsigned int var_20 = 1579645318U;
unsigned int var_21 = 2539736178U;
unsigned int var_22 = 3936982283U;
unsigned int var_23 = 2493525205U;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)103;
signed char var_26 = (signed char)-102;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-5;
unsigned char var_29 = (unsigned char)225;
signed char var_30 = (signed char)-95;
_Bool var_31 = (_Bool)0;
int var_32 = 2004891766;
unsigned int var_33 = 4051940720U;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-9;
unsigned int var_37 = 857050199U;
unsigned int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [25] ;
short arr_4 [25] [25] ;
signed char arr_5 [25] ;
unsigned long long int arr_6 [25] [25] ;
_Bool arr_8 [25] ;
_Bool arr_16 [25] [25] [25] ;
unsigned char arr_18 [25] ;
unsigned int arr_21 [25] [25] [25] [25] ;
unsigned long long int arr_23 [25] ;
unsigned long long int arr_25 [25] [25] [25] [25] ;
int arr_30 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3273943827U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 12565353270733644183ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)16258;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 13051479037223819426ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned char)104 : (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1045513823U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 6937764445472570937ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 4693817599569527819ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2109208116;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
