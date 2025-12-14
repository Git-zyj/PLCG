#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3977025802U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10615174200053292687ULL;
short var_5 = (short)23317;
unsigned int var_6 = 510809871U;
signed char var_7 = (signed char)3;
unsigned long long int var_8 = 8788792649024170339ULL;
signed char var_9 = (signed char)-33;
signed char var_10 = (signed char)0;
unsigned long long int var_11 = 2411478925030924084ULL;
short var_12 = (short)10636;
long long int var_13 = 319855966347692770LL;
int var_14 = -821570273;
int zero = 0;
short var_15 = (short)23211;
signed char var_16 = (signed char)83;
unsigned long long int var_17 = 3676644006917971945ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3237567871U;
long long int var_20 = -1506327549391015268LL;
long long int var_21 = -2804492809165607616LL;
short var_22 = (short)-24719;
signed char var_23 = (signed char)-78;
long long int var_24 = -4683330816363318914LL;
unsigned char var_25 = (unsigned char)83;
unsigned short var_26 = (unsigned short)21729;
short var_27 = (short)-11135;
unsigned short var_28 = (unsigned short)27795;
_Bool var_29 = (_Bool)0;
unsigned long long int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
long long int arr_2 [17] [17] ;
unsigned short arr_3 [17] [17] ;
unsigned short arr_6 [22] ;
signed char arr_7 [22] [22] ;
int arr_8 [22] [22] ;
unsigned short arr_9 [22] ;
short arr_11 [22] [22] [22] ;
long long int arr_12 [22] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] ;
signed char arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 14757479363965241483ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 395841314U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 8499118701394118124LL : -5390963234405532820LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)13721 : (unsigned short)63397;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)20117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 1834408646;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)23411;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)20890;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -7860705220732778151LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)2359 : (short)14172;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 17187213668077156173ULL : 5929374529548344345ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-44;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
