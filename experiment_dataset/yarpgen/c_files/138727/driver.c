#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1058010460U;
unsigned long long int var_4 = 14863214502518773176ULL;
short var_5 = (short)25816;
signed char var_6 = (signed char)-103;
unsigned int var_7 = 1638537387U;
unsigned char var_8 = (unsigned char)220;
int var_9 = -1478264858;
long long int var_10 = -8011861079636887465LL;
short var_12 = (short)5444;
int var_13 = -1993794582;
unsigned char var_15 = (unsigned char)199;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4833726738134275390LL;
long long int var_19 = -5299621352050676142LL;
long long int var_20 = 5354127939343005383LL;
signed char var_21 = (signed char)-26;
short var_22 = (short)-12586;
unsigned int var_23 = 1577267119U;
signed char var_24 = (signed char)-17;
unsigned int var_25 = 3867382854U;
signed char var_26 = (signed char)111;
unsigned short var_27 = (unsigned short)39941;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)98;
unsigned long long int var_30 = 4328937138897562294ULL;
long long int var_31 = -5238884012555024478LL;
int var_32 = 1932733863;
unsigned char var_33 = (unsigned char)193;
unsigned int var_34 = 1849043730U;
short var_35 = (short)-14598;
_Bool arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_3 [25] ;
int arr_5 [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] ;
unsigned short arr_7 [25] [25] [25] ;
unsigned long long int arr_9 [25] [25] [25] ;
long long int arr_10 [25] ;
unsigned char arr_12 [25] [25] ;
unsigned long long int arr_14 [25] ;
unsigned char arr_16 [25] [25] [25] [25] [25] ;
unsigned int arr_17 [25] ;
short arr_18 [25] [25] [25] [25] ;
long long int arr_23 [25] ;
signed char arr_24 [25] [25] ;
unsigned long long int arr_28 [13] ;
unsigned short arr_35 [22] ;
_Bool arr_4 [25] ;
unsigned int arr_19 [25] [25] [25] [25] ;
unsigned char arr_20 [25] [25] [25] ;
unsigned char arr_25 [25] ;
unsigned int arr_26 [25] ;
long long int arr_33 [13] ;
unsigned int arr_39 [22] [22] ;
long long int arr_44 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 13395267666888447247ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 13626934266636181448ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2006757855;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 15221831871605177247ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)34671 : (unsigned short)27559;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 940193393432178802ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 7526651620782506922LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 17636911060847084229ULL : 18221882723478384381ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 3834225831U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-4600;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 6724029171476414960LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 17869575557250050589ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = (unsigned short)50775;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3105488574U : 1394380936U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)170 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 140094517U : 1218748415U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = -6667228998593040589LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? 1771054473U : 1348484667U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_44 [i_0] = -3311011937505181435LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
