#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
short var_1 = (short)27043;
unsigned int var_2 = 1457730162U;
unsigned int var_3 = 2137001782U;
unsigned short var_4 = (unsigned short)43685;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3879312933403244486ULL;
unsigned int var_8 = 4159472335U;
unsigned int var_9 = 562853771U;
unsigned long long int var_10 = 15539491055016320501ULL;
signed char var_11 = (signed char)-93;
unsigned char var_12 = (unsigned char)113;
int zero = 0;
short var_13 = (short)-13628;
long long int var_14 = 8918785160568239168LL;
unsigned char var_15 = (unsigned char)179;
long long int var_16 = 2637003635703668370LL;
unsigned short var_17 = (unsigned short)21710;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)63779;
unsigned short var_20 = (unsigned short)26772;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 16553355071296157627ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)239;
int var_25 = 1920072609;
unsigned long long int var_26 = 7551903499461223344ULL;
unsigned long long int var_27 = 4676049030606294036ULL;
long long int var_28 = -8355245045595523368LL;
unsigned short var_29 = (unsigned short)23858;
short arr_0 [19] ;
unsigned int arr_1 [19] ;
_Bool arr_2 [14] ;
signed char arr_3 [14] ;
signed char arr_4 [14] ;
unsigned short arr_5 [14] ;
unsigned short arr_6 [14] ;
int arr_7 [14] [14] [14] ;
unsigned short arr_9 [14] [14] [14] ;
_Bool arr_10 [14] ;
short arr_11 [14] [14] [14] ;
unsigned int arr_13 [14] [14] [14] [14] ;
signed char arr_16 [14] [14] ;
long long int arr_19 [14] ;
unsigned char arr_20 [14] [14] ;
unsigned char arr_22 [25] ;
unsigned short arr_23 [25] ;
long long int arr_24 [25] ;
long long int arr_25 [25] ;
signed char arr_26 [25] [25] ;
signed char arr_27 [25] ;
signed char arr_29 [25] [25] [25] [25] ;
_Bool arr_31 [25] [25] [25] [25] ;
signed char arr_33 [25] [25] ;
long long int arr_34 [25] ;
_Bool arr_17 [14] ;
signed char arr_18 [14] [14] ;
_Bool arr_21 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)12171;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3157173875U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)29867;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)4886;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1704555023 : 1177841601;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)43949;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)10164;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1546073116U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3867228927846530331LL : 6260395659329801149LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)240 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = (unsigned short)50564;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = -6952111146576930372LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -745498465274884068LL : -5993842541417112345LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)-12 : (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)30 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)94;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -33142903381962208LL : 8161528609147648240LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-94 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
