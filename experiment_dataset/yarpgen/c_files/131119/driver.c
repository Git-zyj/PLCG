#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned char var_1 = (unsigned char)188;
int var_2 = -1509411909;
signed char var_3 = (signed char)-16;
long long int var_4 = -7330341409477259775LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)202;
long long int var_7 = 8781156811089150190LL;
unsigned int var_8 = 2007860018U;
unsigned short var_9 = (unsigned short)38834;
int var_10 = -1732824157;
signed char var_11 = (signed char)43;
unsigned int var_12 = 1388599252U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3544256942U;
long long int var_15 = 8127530253433727850LL;
signed char var_16 = (signed char)-100;
int zero = 0;
long long int var_17 = -3542567023081139828LL;
signed char var_18 = (signed char)-47;
signed char var_19 = (signed char)120;
signed char var_20 = (signed char)-119;
unsigned int var_21 = 1882349977U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)74;
unsigned int var_24 = 2405131635U;
unsigned short var_25 = (unsigned short)56476;
int var_26 = 1623025314;
_Bool var_27 = (_Bool)0;
int var_28 = 1795654813;
signed char var_29 = (signed char)-97;
unsigned long long int var_30 = 14039946689880520942ULL;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)61;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)1433;
signed char var_35 = (signed char)-76;
long long int var_36 = -2130793476919499744LL;
unsigned short var_37 = (unsigned short)17743;
unsigned int var_38 = 4060699511U;
unsigned int var_39 = 3603239803U;
unsigned char var_40 = (unsigned char)177;
_Bool var_41 = (_Bool)1;
unsigned int var_42 = 3679958551U;
unsigned int var_43 = 242557975U;
long long int var_44 = -2710666797699594238LL;
int var_45 = 1163107959;
unsigned long long int var_46 = 3322320491091241297ULL;
_Bool var_47 = (_Bool)0;
unsigned int var_48 = 1311184299U;
long long int var_49 = 8138723194321066093LL;
unsigned short var_50 = (unsigned short)20064;
long long int var_51 = 2552546120808951305LL;
_Bool var_52 = (_Bool)1;
signed char var_53 = (signed char)-84;
unsigned int var_54 = 1157553609U;
unsigned int var_55 = 1163903105U;
unsigned char arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
unsigned int arr_2 [14] ;
int arr_3 [14] ;
unsigned int arr_4 [14] ;
_Bool arr_6 [14] [14] [14] ;
_Bool arr_8 [14] [14] ;
_Bool arr_9 [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] [14] [14] ;
int arr_18 [14] [14] [14] [14] [14] [14] ;
long long int arr_19 [14] ;
unsigned int arr_21 [14] [14] [14] [14] [14] ;
unsigned long long int arr_28 [24] ;
signed char arr_29 [24] [24] ;
unsigned char arr_30 [24] ;
unsigned short arr_31 [24] [24] ;
unsigned long long int arr_32 [24] ;
long long int arr_33 [24] [24] ;
unsigned int arr_34 [24] [24] [24] ;
_Bool arr_35 [24] [24] [24] ;
long long int arr_37 [24] [24] [24] ;
unsigned int arr_38 [24] [24] [24] ;
_Bool arr_41 [24] ;
unsigned char arr_42 [24] ;
unsigned int arr_43 [24] [24] ;
unsigned char arr_46 [24] [24] [24] ;
signed char arr_47 [24] ;
long long int arr_48 [24] [24] ;
_Bool arr_49 [24] ;
unsigned char arr_50 [24] [24] [24] ;
signed char arr_57 [24] ;
int arr_58 [24] [24] [24] [24] ;
signed char arr_65 [24] [24] [24] [24] ;
long long int arr_68 [24] ;
unsigned short arr_5 [14] ;
_Bool arr_12 [14] [14] [14] ;
_Bool arr_15 [14] [14] [14] ;
unsigned char arr_16 [14] [14] [14] [14] [14] ;
unsigned long long int arr_20 [14] [14] [14] [14] ;
signed char arr_26 [14] ;
unsigned int arr_27 [14] [14] ;
signed char arr_36 [24] ;
signed char arr_39 [24] ;
signed char arr_40 [24] [24] ;
unsigned int arr_44 [24] ;
_Bool arr_56 [24] [24] [24] [24] ;
unsigned int arr_59 [24] [24] [24] ;
unsigned short arr_63 [24] [24] [24] [24] ;
unsigned short arr_69 [24] [24] ;
int arr_74 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)21972;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2969248910U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1528400132;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1530893565U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3841858729U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2020163791 : 797300825;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3576648800856338625LL : 7465134826633106507LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 811174289U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = 15138225645251435630ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-82 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)2371;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 8953599883931644196ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = -7534505705506535182LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 3199381351U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 925234906036300674LL : 9120457845895056785LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 390913972U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = 3618889699U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_47 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_48 [i_0] [i_1] = 7662140782222382792LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? (signed char)-22 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2003308895 : -1462456880;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-106 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? 8543491412822582908LL : -8199121617660129521LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)38069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)138 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13511234152710005755ULL : 9555027114204760174ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = 586545327U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (signed char)47 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (signed char)-14 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = 218718362U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1994659346U : 729468296U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)57607 : (unsigned short)35382;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_69 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)31897 : (unsigned short)28316;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_74 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 376045469 : 312849874;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_69 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_74 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
