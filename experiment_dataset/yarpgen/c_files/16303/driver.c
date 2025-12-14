#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 343997530574952623ULL;
unsigned long long int var_2 = 6330683006128767645ULL;
unsigned char var_3 = (unsigned char)88;
short var_4 = (short)24971;
long long int var_5 = -121295820751870217LL;
unsigned int var_6 = 792205554U;
unsigned long long int var_7 = 17918727742378049955ULL;
int var_8 = 1372515929;
unsigned short var_9 = (unsigned short)36255;
long long int var_10 = -7225733854485848239LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)37409;
unsigned long long int var_13 = 7049874637815235496ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)41691;
_Bool var_15 = (_Bool)1;
int var_16 = -1877781247;
short var_17 = (short)-7117;
int var_18 = 1186140283;
signed char var_19 = (signed char)-19;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 5438052392021973458ULL;
unsigned int var_23 = 4046825651U;
unsigned int var_24 = 1638320539U;
unsigned short var_25 = (unsigned short)38501;
_Bool var_26 = (_Bool)0;
int var_27 = -781243345;
unsigned short var_28 = (unsigned short)48907;
int var_29 = -679916540;
signed char var_30 = (signed char)1;
unsigned long long int var_31 = 17425835218535425666ULL;
short var_32 = (short)20528;
unsigned char var_33 = (unsigned char)0;
unsigned long long int var_34 = 9306496627448035538ULL;
long long int var_35 = -2007412542899240272LL;
short var_36 = (short)22280;
short var_37 = (short)-23402;
_Bool var_38 = (_Bool)1;
_Bool var_39 = (_Bool)0;
unsigned long long int var_40 = 10198738690077735842ULL;
unsigned short var_41 = (unsigned short)59022;
short var_42 = (short)11494;
_Bool arr_0 [18] [18] ;
signed char arr_1 [18] ;
int arr_2 [18] [18] ;
short arr_4 [18] [18] [18] ;
_Bool arr_7 [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] [18] ;
unsigned long long int arr_13 [18] ;
unsigned int arr_14 [18] [18] [18] ;
unsigned long long int arr_16 [18] ;
short arr_18 [18] ;
unsigned int arr_19 [18] [18] [18] [18] ;
_Bool arr_25 [18] ;
int arr_26 [18] [18] ;
unsigned long long int arr_35 [21] [21] ;
unsigned char arr_36 [21] [21] ;
_Bool arr_20 [18] ;
signed char arr_30 [18] [18] [18] ;
_Bool arr_37 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -810776322;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)21005;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 651071856U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10774842136931226306ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 13459150891247534553ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 782461705U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 3827703016572900927ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)5942;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 404068110U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = -408532732;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = 11182905773915754662ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)114 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
