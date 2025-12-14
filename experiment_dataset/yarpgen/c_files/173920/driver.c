#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2014964311;
unsigned short var_1 = (unsigned short)35965;
unsigned char var_2 = (unsigned char)0;
unsigned int var_3 = 3993545177U;
signed char var_4 = (signed char)-43;
unsigned long long int var_5 = 8575320112630302793ULL;
unsigned int var_6 = 4137135666U;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-9487;
int var_9 = 1616413009;
short var_10 = (short)24723;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-25267;
long long int var_13 = -7195033315502806472LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12747981780111829048ULL;
unsigned long long int var_16 = 1894415223834141313ULL;
unsigned short var_17 = (unsigned short)20023;
long long int var_18 = 5805941010004558877LL;
long long int var_19 = 5006256809977249680LL;
_Bool var_20 = (_Bool)0;
int var_21 = 2139108055;
unsigned short var_22 = (unsigned short)55405;
int var_23 = -455800504;
long long int var_24 = -2369180543143985723LL;
signed char var_25 = (signed char)34;
unsigned int var_26 = 388161325U;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)23905;
signed char var_29 = (signed char)-34;
long long int var_30 = -3091544910594188954LL;
int var_31 = -1379240365;
unsigned int var_32 = 721363376U;
_Bool var_33 = (_Bool)1;
long long int var_34 = 7358995241913714218LL;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)4505;
unsigned int var_37 = 1648041296U;
int var_38 = -1886531236;
unsigned int var_39 = 133415752U;
int var_40 = 37940771;
long long int var_41 = 910027610793185217LL;
unsigned int var_42 = 2028297967U;
int arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
unsigned long long int arr_2 [19] ;
signed char arr_11 [16] ;
_Bool arr_12 [16] [16] ;
unsigned long long int arr_17 [23] ;
unsigned int arr_18 [23] [23] [23] ;
unsigned int arr_21 [23] [23] ;
long long int arr_24 [23] [23] [23] ;
int arr_25 [23] [23] [23] ;
unsigned short arr_26 [23] [23] [23] [23] ;
short arr_27 [23] [23] [23] ;
unsigned char arr_28 [23] [23] ;
unsigned short arr_30 [23] ;
_Bool arr_31 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_33 [23] [23] [23] [23] [23] [23] ;
_Bool arr_35 [23] [23] [23] [23] [23] [23] ;
_Bool arr_38 [23] [23] [23] ;
unsigned short arr_40 [23] [23] [23] ;
unsigned int arr_41 [23] [23] ;
short arr_43 [23] [23] ;
unsigned long long int arr_47 [23] [23] ;
unsigned long long int arr_51 [23] [23] [23] ;
signed char arr_77 [10] [10] ;
signed char arr_3 [19] ;
_Bool arr_4 [19] ;
signed char arr_5 [19] ;
_Bool arr_14 [16] ;
unsigned int arr_15 [16] [16] ;
unsigned int arr_22 [23] [23] [23] ;
unsigned short arr_23 [23] ;
unsigned char arr_32 [23] [23] [23] [23] [23] [23] ;
int arr_37 [23] ;
long long int arr_42 [23] [23] [23] [23] ;
long long int arr_55 [23] [23] ;
int arr_58 [23] [23] ;
unsigned int arr_59 [23] [23] [23] ;
unsigned long long int arr_60 [23] ;
long long int arr_64 [22] [22] ;
unsigned short arr_70 [10] ;
short arr_71 [10] ;
unsigned char arr_82 [10] [10] [10] [10] ;
short arr_85 [10] ;
_Bool arr_86 [10] [10] [10] ;
int arr_93 [10] [10] [10] ;
unsigned char arr_94 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -2110159198;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)55566;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 823171816116999953ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 7173492781298479313ULL : 14202381951575837255ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1207682086U : 1122028442U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 2731919021U : 3173497865U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 690843441878967439LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 1803107828;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)5135 : (unsigned short)3160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)22558;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (unsigned short)44184;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)15663;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (unsigned short)3530;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? 2093355995U : 376837356U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_43 [i_0] [i_1] = (short)-16502;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_47 [i_0] [i_1] = 18424084774020507175ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 2434062234435463241ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_77 [i_0] [i_1] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 4051454603U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3666966479U : 3971496711U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19542 : (unsigned short)24268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)197 : (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 1985469070 : 1721527567;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1955696832922088800LL : -4754531847533128753LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_55 [i_0] [i_1] = (i_1 % 2 == 0) ? -725698552354118816LL : -6863131556693502187LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? -1518035150 : -698951958;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3438453412U : 3926025593U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? 9613194360149723823ULL : 9895302337853074346ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_64 [i_0] [i_1] = 8731023628807218777LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_70 [i_0] = (unsigned short)64082;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_71 [i_0] = (short)20737;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_82 [i_0] [i_1] [i_2] [i_3] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_85 [i_0] = (short)-23699;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_86 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_93 [i_0] [i_1] [i_2] = -2044800715;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_94 [i_0] = (unsigned char)41;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_55 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_71 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_82 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_85 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_86 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_93 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_94 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
