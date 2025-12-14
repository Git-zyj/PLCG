#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 722830253U;
unsigned int var_1 = 3202004697U;
signed char var_3 = (signed char)-116;
unsigned int var_4 = 3469907550U;
long long int var_8 = 7409493959261754650LL;
unsigned long long int var_11 = 10684584578293251697ULL;
signed char var_12 = (signed char)-117;
unsigned char var_14 = (unsigned char)116;
unsigned long long int var_15 = 5679218181928669105ULL;
unsigned char var_16 = (unsigned char)211;
unsigned int var_17 = 2404881206U;
unsigned int var_18 = 2976035880U;
int zero = 0;
unsigned long long int var_20 = 9963117242269550174ULL;
short var_21 = (short)28090;
unsigned int var_22 = 4112539003U;
unsigned char var_23 = (unsigned char)250;
long long int var_24 = -5344904916742312432LL;
long long int var_25 = -3056891305360620452LL;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 8115554319362785848ULL;
short arr_0 [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_3 [24] ;
_Bool arr_4 [24] ;
short arr_5 [24] ;
unsigned long long int arr_6 [24] ;
unsigned char arr_7 [24] ;
unsigned char arr_8 [24] ;
short arr_9 [24] ;
signed char arr_2 [20] [20] ;
short arr_10 [24] [24] [24] ;
signed char arr_11 [24] ;
short arr_12 [24] ;
signed char arr_13 [24] ;
unsigned int arr_18 [17] ;
signed char arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-18701 : (short)13329;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7253722107600168618ULL : 446436145628305178ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)4388 : (short)29046;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 16780518205799770085ULL : 5879652204074461235ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)23273 : (short)16006;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-83 : (signed char)47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-31957 : (short)27962;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)21114 : (short)-18388;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 2938839401U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)34;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
