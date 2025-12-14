#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42839;
unsigned short var_1 = (unsigned short)29611;
unsigned short var_3 = (unsigned short)53194;
unsigned short var_4 = (unsigned short)31921;
short var_5 = (short)24653;
unsigned short var_6 = (unsigned short)56726;
unsigned long long int var_10 = 16957202663910757782ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)55213;
unsigned long long int var_17 = 11206111210269356697ULL;
signed char var_18 = (signed char)62;
unsigned long long int var_19 = 7470934125508997520ULL;
signed char var_20 = (signed char)-121;
short var_21 = (short)-10511;
unsigned long long int var_22 = 16838610386782094398ULL;
signed char var_23 = (signed char)39;
signed char var_24 = (signed char)87;
unsigned long long int var_25 = 9014654658766927087ULL;
unsigned short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned short arr_5 [13] ;
unsigned short arr_6 [13] [13] [13] ;
signed char arr_9 [13] [13] [13] ;
unsigned long long int arr_11 [22] ;
unsigned short arr_12 [22] [22] ;
unsigned long long int arr_14 [21] ;
short arr_15 [21] [21] ;
short arr_18 [21] ;
signed char arr_21 [21] [21] [21] [21] ;
unsigned long long int arr_3 [13] ;
unsigned short arr_10 [13] [13] [13] ;
unsigned long long int arr_13 [22] [22] ;
unsigned long long int arr_28 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7762;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 15811096016188635452ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)43394;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 9848009136163200183ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)37235;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4282;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 4563381208914842319ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)32730;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 15828249353636502541ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (short)2408;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (short)-8204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 11509189491096793087ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)741 : (unsigned short)39388;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 158617263605174688ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15182457906048221977ULL : 762883532904234381ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
