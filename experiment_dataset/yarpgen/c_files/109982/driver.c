#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1311905482;
unsigned short var_3 = (unsigned short)22872;
short var_5 = (short)19013;
signed char var_8 = (signed char)45;
unsigned char var_12 = (unsigned char)11;
unsigned short var_13 = (unsigned short)59786;
unsigned short var_14 = (unsigned short)61360;
int zero = 0;
unsigned char var_15 = (unsigned char)243;
short var_16 = (short)-25584;
unsigned long long int var_17 = 4951250967913425203ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4731862690158644424ULL;
unsigned short var_21 = (unsigned short)42440;
unsigned char var_22 = (unsigned char)177;
unsigned char var_23 = (unsigned char)114;
long long int var_24 = -5371836757652057466LL;
long long int var_25 = -3120219535866717413LL;
long long int var_26 = 4860452450528792522LL;
long long int var_27 = -3335638779757958109LL;
unsigned char var_28 = (unsigned char)25;
unsigned long long int var_29 = 16661255205467301036ULL;
long long int var_30 = 557292324072571427LL;
long long int var_31 = 5865676544444375686LL;
unsigned char var_32 = (unsigned char)218;
long long int var_33 = -4223466780261393053LL;
unsigned int var_34 = 4216573264U;
unsigned char var_35 = (unsigned char)192;
unsigned char var_36 = (unsigned char)224;
unsigned long long int var_37 = 12098400367197111844ULL;
unsigned long long int arr_0 [16] [16] ;
_Bool arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned long long int arr_3 [16] ;
short arr_10 [18] [18] ;
unsigned short arr_11 [18] ;
unsigned int arr_12 [18] ;
int arr_14 [18] [18] [18] ;
unsigned long long int arr_20 [18] ;
unsigned char arr_21 [18] [18] ;
signed char arr_22 [18] [18] ;
unsigned short arr_23 [18] [18] ;
long long int arr_25 [18] ;
long long int arr_27 [18] ;
unsigned int arr_29 [18] ;
unsigned char arr_36 [18] [18] ;
unsigned short arr_37 [18] [18] [18] ;
unsigned short arr_39 [18] [18] [18] [18] ;
unsigned short arr_40 [18] [18] [18] ;
short arr_49 [18] ;
long long int arr_50 [18] [18] ;
long long int arr_4 [16] ;
short arr_9 [15] [15] ;
_Bool arr_15 [18] [18] [18] ;
short arr_16 [18] [18] ;
unsigned short arr_17 [18] ;
_Bool arr_18 [18] [18] ;
unsigned int arr_19 [18] ;
signed char arr_24 [18] [18] ;
unsigned int arr_28 [18] ;
short arr_35 [18] [18] [18] ;
unsigned long long int arr_42 [18] [18] ;
unsigned char arr_43 [18] [18] [18] [18] ;
short arr_47 [18] [18] [18] ;
_Bool arr_48 [18] [18] [18] ;
long long int arr_52 [18] [18] ;
short arr_53 [18] [18] ;
unsigned char arr_54 [18] [18] [18] ;
signed char arr_55 [18] ;
unsigned char arr_58 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 11457076225440040737ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 17909862182983960206ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-3113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28832 : (unsigned short)30423;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 2250136891U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1722681712 : 932386488;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 11052121278507122233ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)36129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -308857824553172210LL : 5804149581684281165LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 6469661427903594245LL : -6998510933701113260LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = 1240936598U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)57060;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43694;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)40018 : (unsigned short)505;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = (short)-4169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_50 [i_0] [i_1] = 7218320557659263896LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -7350557066398151009LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-8408;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)10573 : (short)-27239;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17663 : (unsigned short)14698;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1192121563U : 3517884503U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 1843690487U : 2380918238U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-4346 : (short)-20134;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 6773381756020364654ULL : 5480018363135866545ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-4879 : (short)-21851;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_52 [i_0] [i_1] = (i_1 % 2 == 0) ? 7336266389385681574LL : 4793693323728505234LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)24651 : (short)-4735;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)36 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (signed char)-52 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = (unsigned char)203;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_54 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_58 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
