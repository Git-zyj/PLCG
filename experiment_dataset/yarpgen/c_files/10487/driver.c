#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14803715110653070807ULL;
unsigned long long int var_2 = 18116913239237484928ULL;
unsigned long long int var_3 = 4973846700577095626ULL;
unsigned long long int var_4 = 9350923148229093285ULL;
unsigned long long int var_5 = 8973415907520940373ULL;
unsigned int var_6 = 2174611728U;
unsigned long long int var_7 = 3145760356057854233ULL;
unsigned char var_8 = (unsigned char)198;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-107;
unsigned int var_11 = 3917162504U;
unsigned long long int var_12 = 12492965338437385756ULL;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
unsigned char var_14 = (unsigned char)58;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9307154682707503566ULL;
signed char var_18 = (signed char)12;
unsigned long long int var_19 = 23542393573188984ULL;
unsigned long long int var_20 = 17655485194863113172ULL;
long long int var_21 = -8520577434613905169LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 9182254421434406974ULL;
unsigned int var_26 = 2675793405U;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)46484;
long long int var_29 = 8745813679427442029LL;
signed char var_30 = (signed char)-112;
_Bool var_31 = (_Bool)1;
int var_32 = 497996416;
short var_33 = (short)1371;
short var_34 = (short)29768;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)59;
int var_37 = 87906577;
unsigned long long int var_38 = 18014106130113892037ULL;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 5040001316388759725ULL;
unsigned long long int var_41 = 9145014637919164564ULL;
int var_42 = -1468511917;
long long int var_43 = -6130912216933785186LL;
int var_44 = -384494194;
_Bool var_45 = (_Bool)1;
unsigned long long int var_46 = 11585244269292652520ULL;
unsigned long long int var_47 = 15634806297419304183ULL;
int var_48 = 341338145;
short var_49 = (short)24686;
unsigned long long int var_50 = 6220488469393045188ULL;
unsigned int var_51 = 1689698213U;
unsigned long long int var_52 = 10584768459765526205ULL;
unsigned long long int var_53 = 2814026607638525194ULL;
unsigned int var_54 = 1352268617U;
long long int var_55 = -6323896077553196575LL;
short var_56 = (short)178;
unsigned long long int var_57 = 6868332244569671846ULL;
signed char var_58 = (signed char)-11;
unsigned int var_59 = 3890131409U;
long long int var_60 = 4693399568321163598LL;
int var_61 = 802477682;
unsigned int var_62 = 3737628473U;
signed char var_63 = (signed char)(-127 - 1);
signed char var_64 = (signed char)5;
unsigned long long int var_65 = 11742839068226825974ULL;
unsigned char arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
long long int arr_2 [17] [17] ;
int arr_3 [17] [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned long long int arr_5 [17] [17] [17] [17] ;
_Bool arr_6 [17] [17] [17] [17] ;
_Bool arr_8 [17] [17] [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
unsigned int arr_11 [17] [17] [17] [17] [17] ;
signed char arr_13 [17] [17] ;
int arr_15 [17] [17] [17] ;
long long int arr_17 [13] ;
unsigned long long int arr_18 [13] ;
long long int arr_20 [13] ;
unsigned short arr_22 [13] [13] ;
int arr_23 [13] [13] [13] ;
signed char arr_26 [13] [13] [13] ;
unsigned short arr_28 [13] [13] ;
unsigned long long int arr_29 [13] [13] ;
unsigned long long int arr_30 [13] [13] [13] [13] ;
short arr_32 [13] [13] [13] [13] ;
unsigned short arr_34 [13] [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_35 [13] [13] [13] [13] [13] ;
unsigned char arr_36 [13] [13] [13] [13] [13] ;
signed char arr_38 [13] ;
_Bool arr_46 [13] [13] [13] [13] [13] ;
_Bool arr_50 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_54 [13] [13] [13] ;
unsigned short arr_66 [13] [13] ;
unsigned short arr_71 [13] [13] [13] ;
unsigned short arr_73 [13] [13] [13] ;
_Bool arr_75 [16] ;
unsigned long long int arr_77 [16] ;
short arr_7 [17] [17] [17] ;
signed char arr_12 [17] [17] [17] [17] ;
signed char arr_41 [13] ;
signed char arr_48 [13] [13] [13] ;
long long int arr_64 [13] [13] [13] [13] [13] ;
unsigned long long int arr_70 [13] [13] [13] [13] ;
long long int arr_79 [16] [16] [16] ;
unsigned char arr_80 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -10275358430491586LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -834352351;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 6183584681922666961ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 9317681844628306174ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1863538395320501224ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 2653221492U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 467361654;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = -3742726595804943148LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 4755201173411558261ULL : 10592761700555460835ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 8741011768380093386LL : 4898189947564618775LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)15562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -525620338 : -269152620;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)9755 : (unsigned short)60725;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = 678752108719900734ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 12917281997080030273ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (short)-12914;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)59236;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 1480460586478277774ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)68 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_66 [i_0] [i_1] = (unsigned short)31448;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)27198 : (unsigned short)29755;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (unsigned short)7528;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_75 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_77 [i_0] = 11898319146795457853ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-13278 : (short)22826;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (signed char)38 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-81 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 7362113767834811025LL : -1227958292771958516LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 17261217418976974719ULL : 2324148306198467488ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_79 [i_0] [i_1] [i_2] = -95520801021433947LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_80 [i_0] = (unsigned char)6;
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
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_79 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_80 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
