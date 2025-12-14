#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)51;
long long int var_5 = 6182897642534926926LL;
unsigned short var_6 = (unsigned short)17409;
signed char var_7 = (signed char)18;
unsigned int var_8 = 4226686597U;
unsigned int var_13 = 1239039975U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-27391;
unsigned char var_19 = (unsigned char)248;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1553529127;
unsigned char var_22 = (unsigned char)120;
unsigned char var_23 = (unsigned char)180;
unsigned short var_24 = (unsigned short)23001;
int var_25 = 919646982;
unsigned int var_26 = 3500732223U;
unsigned int var_27 = 3366414161U;
short var_28 = (short)17001;
int var_29 = -478039583;
long long int var_30 = -8912409142308481939LL;
unsigned short var_31 = (unsigned short)7219;
short var_32 = (short)29473;
unsigned int var_33 = 2683191150U;
unsigned long long int var_34 = 14342448167420230278ULL;
unsigned long long int var_35 = 2127128729886388491ULL;
int var_36 = -698475268;
unsigned char var_37 = (unsigned char)230;
unsigned short var_38 = (unsigned short)51754;
unsigned long long int var_39 = 8792729363769901555ULL;
signed char var_40 = (signed char)-74;
unsigned int var_41 = 4119751235U;
unsigned char var_42 = (unsigned char)233;
int var_43 = 1172317177;
unsigned char var_44 = (unsigned char)227;
unsigned int var_45 = 4081391656U;
short arr_0 [21] ;
int arr_1 [21] ;
short arr_2 [21] ;
long long int arr_3 [19] [19] ;
signed char arr_4 [19] ;
long long int arr_7 [12] ;
_Bool arr_8 [17] ;
unsigned int arr_9 [17] ;
unsigned char arr_10 [17] ;
unsigned short arr_11 [17] ;
_Bool arr_15 [17] [17] ;
unsigned char arr_16 [17] [17] [17] ;
unsigned short arr_17 [17] ;
unsigned int arr_21 [17] [17] ;
unsigned char arr_24 [17] ;
short arr_5 [19] ;
unsigned short arr_14 [17] [17] ;
long long int arr_19 [17] ;
_Bool arr_20 [17] ;
signed char arr_29 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-20925;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1119337505;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-4434;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 6740148871370828443LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 5250824435444534997LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3878872226U : 144200975U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)39608;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53462 : (unsigned short)3510;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = 880714748U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-9883;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48168 : (unsigned short)31441;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 8924338138923463174LL : 587215689655217068LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)-34;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
