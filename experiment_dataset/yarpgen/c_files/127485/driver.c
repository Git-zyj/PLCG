#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
signed char var_1 = (signed char)26;
unsigned short var_2 = (unsigned short)62332;
unsigned short var_3 = (unsigned short)43886;
unsigned char var_4 = (unsigned char)81;
signed char var_5 = (signed char)-94;
short var_6 = (short)-21723;
signed char var_7 = (signed char)-41;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)40025;
unsigned short var_11 = (unsigned short)39403;
unsigned short var_12 = (unsigned short)30665;
unsigned int var_13 = 4120187279U;
unsigned short var_14 = (unsigned short)39106;
unsigned short var_15 = (unsigned short)64442;
unsigned short var_16 = (unsigned short)40613;
signed char var_17 = (signed char)38;
int var_18 = -167840956;
int zero = 0;
unsigned short var_19 = (unsigned short)43346;
signed char var_20 = (signed char)-12;
unsigned long long int var_21 = 7463756925587266504ULL;
long long int var_22 = 4877979247565509318LL;
unsigned long long int var_23 = 14958643913803938417ULL;
short var_24 = (short)13036;
short var_25 = (short)31207;
unsigned long long int var_26 = 9169241817840118543ULL;
short var_27 = (short)22197;
long long int var_28 = -1234605953144148450LL;
signed char var_29 = (signed char)39;
long long int var_30 = -7261144373293932090LL;
unsigned long long int var_31 = 9732825956431245226ULL;
short var_32 = (short)-19445;
unsigned char var_33 = (unsigned char)167;
signed char var_34 = (signed char)-122;
unsigned short var_35 = (unsigned short)40517;
unsigned short var_36 = (unsigned short)49105;
short var_37 = (short)10546;
unsigned long long int var_38 = 8207950226023189910ULL;
unsigned int var_39 = 254168654U;
unsigned short var_40 = (unsigned short)11536;
unsigned long long int var_41 = 3117167402495022106ULL;
short var_42 = (short)-30267;
short var_43 = (short)14446;
unsigned long long int var_44 = 17257180734621656357ULL;
_Bool var_45 = (_Bool)0;
short var_46 = (short)13084;
short var_47 = (short)29041;
short var_48 = (short)-10743;
signed char var_49 = (signed char)36;
signed char var_50 = (signed char)-106;
long long int var_51 = 9203497874275642204LL;
signed char var_52 = (signed char)-43;
long long int var_53 = -8403159979699868262LL;
unsigned short var_54 = (unsigned short)48916;
unsigned long long int var_55 = 847443362727372186ULL;
long long int var_56 = 3420701053772494586LL;
signed char var_57 = (signed char)-13;
unsigned long long int var_58 = 17271959540036832194ULL;
long long int var_59 = 7306621193096207452LL;
short var_60 = (short)32565;
unsigned long long int var_61 = 7450028325545782447ULL;
unsigned int var_62 = 2968264210U;
short var_63 = (short)6868;
signed char var_64 = (signed char)110;
unsigned long long int var_65 = 17108323351939724258ULL;
unsigned short var_66 = (unsigned short)36663;
short var_67 = (short)11125;
unsigned char var_68 = (unsigned char)44;
unsigned short var_69 = (unsigned short)42039;
signed char var_70 = (signed char)12;
signed char var_71 = (signed char)-23;
unsigned long long int var_72 = 763890264986700249ULL;
signed char var_73 = (signed char)100;
unsigned int var_74 = 1556313966U;
unsigned char var_75 = (unsigned char)27;
unsigned short var_76 = (unsigned short)29000;
signed char var_77 = (signed char)51;
unsigned short var_78 = (unsigned short)39927;
long long int var_79 = -5418580178956800612LL;
_Bool var_80 = (_Bool)0;
unsigned short var_81 = (unsigned short)50898;
signed char var_82 = (signed char)12;
signed char var_83 = (signed char)82;
unsigned char var_84 = (unsigned char)179;
unsigned long long int var_85 = 10369352730452446220ULL;
unsigned long long int var_86 = 10527636465079822630ULL;
unsigned int var_87 = 3991085491U;
unsigned short var_88 = (unsigned short)27020;
unsigned long long int var_89 = 15816710498885889587ULL;
long long int var_90 = 4476922361303960078LL;
unsigned short var_91 = (unsigned short)640;
long long int var_92 = -1707416875958844111LL;
short arr_0 [16] ;
short arr_1 [16] ;
_Bool arr_2 [16] [16] [16] ;
short arr_3 [16] [16] ;
long long int arr_4 [16] [16] [16] ;
signed char arr_5 [16] [16] [16] [16] ;
signed char arr_6 [16] [16] [16] [16] ;
short arr_7 [16] [16] [16] [16] ;
unsigned long long int arr_9 [16] ;
signed char arr_10 [16] [16] ;
unsigned int arr_11 [16] [16] ;
long long int arr_13 [16] [16] ;
_Bool arr_14 [16] [16] [16] [16] [16] [16] ;
short arr_15 [16] [16] [16] [16] [16] ;
unsigned long long int arr_17 [16] [16] [16] [16] [16] ;
long long int arr_21 [16] [16] [16] [16] ;
unsigned short arr_23 [16] [16] ;
short arr_26 [16] ;
unsigned long long int arr_29 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_30 [16] [16] [16] [16] [16] ;
unsigned short arr_32 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_33 [16] [16] [16] [16] [16] [16] ;
signed char arr_34 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_35 [16] [16] ;
short arr_41 [16] [16] [16] [16] [16] [16] [16] ;
unsigned int arr_42 [16] ;
signed char arr_53 [24] ;
signed char arr_54 [24] ;
unsigned short arr_55 [24] [24] [24] ;
unsigned int arr_56 [24] [24] [24] ;
unsigned short arr_57 [24] [24] ;
unsigned short arr_60 [24] ;
signed char arr_63 [24] [24] [24] ;
_Bool arr_65 [24] [24] [24] ;
short arr_68 [24] ;
short arr_69 [24] [24] ;
int arr_70 [24] ;
unsigned short arr_71 [22] [22] ;
signed char arr_72 [22] ;
short arr_75 [22] [22] ;
unsigned short arr_77 [22] [22] [22] ;
unsigned int arr_79 [22] [22] [22] [22] ;
signed char arr_80 [22] [22] [22] [22] [22] [22] ;
signed char arr_81 [22] [22] [22] [22] [22] ;
unsigned short arr_84 [22] [22] ;
unsigned short arr_85 [22] [22] [22] [22] [22] ;
unsigned short arr_88 [22] ;
unsigned char arr_92 [22] [22] ;
signed char arr_95 [22] [22] [22] [22] ;
short arr_99 [22] [22] ;
unsigned char arr_100 [22] ;
unsigned long long int arr_8 [16] ;
long long int arr_19 [16] [16] [16] [16] [16] ;
long long int arr_27 [16] [16] [16] [16] [16] ;
signed char arr_31 [16] [16] [16] [16] ;
signed char arr_58 [24] ;
short arr_59 [24] [24] [24] ;
_Bool arr_66 [24] ;
int arr_67 [24] [24] ;
unsigned short arr_86 [22] [22] [22] [22] [22] ;
unsigned long long int arr_89 [22] [22] [22] ;
signed char arr_103 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-11661 : (short)-7038;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)9704;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-9641;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5702239349404388944LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)20512 : (short)-2256;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 11712865190722958749ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1161790603U : 2045154882U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = -5405552279431009457LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)27855;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 9137882716624017810ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -4132882601204117714LL : 794289994554822664LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)6220;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (short)14309;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 920430631592771533ULL : 879529204815907067ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)19860;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)21828 : (unsigned short)9842;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)64952 : (unsigned short)37609;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)32934 : (unsigned short)48114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-20339;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 1593910852U : 1971214266U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_53 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_54 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)39049 : (unsigned short)58860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 2112276622U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned short)18000;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10102 : (unsigned short)54546;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-122 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_68 [i_0] = (short)9370;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_69 [i_0] [i_1] = (short)-17839;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_70 [i_0] = 464945367;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_71 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)45512 : (unsigned short)16077;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_72 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_75 [i_0] [i_1] = (short)-31602;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)13381 : (unsigned short)27025;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 863478365U : 1598757438U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_84 [i_0] [i_1] = (unsigned short)55788;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)44377;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_88 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49925 : (unsigned short)1475;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_92 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)31 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_95 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)56 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_99 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16446 : (short)29575;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_100 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 8435768058117781694ULL : 6472926742640567072ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -8136581687887167541LL : -2961169268057747313LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4512184422505480209LL : -246405269134581843LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)14 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_58 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-4814 : (short)31260;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_67 [i_0] [i_1] = (i_1 % 2 == 0) ? -79252126 : -1798236431;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)35655 : (unsigned short)906;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_89 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1509018876396398725ULL : 6428936159352130814ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_103 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-124 : (signed char)64;
}

void checksum() {
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
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_67 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_89 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_103 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
