#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1260035264822124527LL;
short var_2 = (short)1945;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2856364349U;
long long int var_6 = -1741189169555508804LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1835757301313321963LL;
unsigned int var_9 = 1656722239U;
long long int var_10 = 4134243894889110643LL;
int zero = 0;
long long int var_11 = -3020972379025016972LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3329810373173948244LL;
_Bool var_14 = (_Bool)1;
int var_15 = -465476951;
unsigned short var_16 = (unsigned short)25265;
unsigned char var_17 = (unsigned char)203;
long long int var_18 = 3510454492418882197LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7205783686695679663LL;
int arr_6 [13] [13] [13] ;
short arr_15 [13] [13] ;
long long int arr_22 [20] ;
unsigned char arr_23 [20] [20] ;
unsigned short arr_25 [24] ;
int arr_13 [13] ;
short arr_17 [13] [13] [13] [13] [13] ;
long long int arr_24 [20] ;
long long int arr_27 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 897052953;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31894 : (short)1428;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = -1506351955697703850LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)61 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (unsigned short)23459;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -2016075333 : 1150376552;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)610 : (short)11275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 52898154533613429LL : 3495541992147067743LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = 3662055993700992142LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
