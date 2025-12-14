#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3739004405589429240LL;
long long int var_2 = -8838096505085731161LL;
unsigned short var_3 = (unsigned short)9059;
unsigned short var_5 = (unsigned short)29258;
int var_6 = 1360099935;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5332315134045984830LL;
unsigned short var_10 = (unsigned short)19783;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 1918391137857394664LL;
short var_14 = (short)1141;
long long int var_15 = -1603975915337812998LL;
int var_16 = -1396330052;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = 1398947346;
_Bool var_20 = (_Bool)0;
long long int var_21 = -1619892743866763702LL;
long long int var_22 = 6521810828870256101LL;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
long long int var_26 = -7958386247382566846LL;
int var_27 = 82859158;
_Bool var_28 = (_Bool)1;
long long int var_29 = -8564519402783040522LL;
_Bool var_30 = (_Bool)1;
int var_31 = 272939531;
short var_32 = (short)-9271;
long long int var_33 = 5692127921035631280LL;
long long int var_34 = -3729028367653564804LL;
long long int var_35 = 5866846083439975828LL;
long long int var_36 = -1321519115423993628LL;
long long int var_37 = -4112563776899572007LL;
int var_38 = 939133706;
long long int var_39 = -3545762363461193787LL;
long long int var_40 = 2653938598816333586LL;
_Bool var_41 = (_Bool)1;
long long int var_42 = 230664482546985618LL;
long long int var_43 = -4273762376817960754LL;
_Bool var_44 = (_Bool)1;
_Bool var_45 = (_Bool)0;
unsigned short var_46 = (unsigned short)27289;
_Bool var_47 = (_Bool)0;
int var_48 = 1543434850;
int var_49 = -1863499827;
long long int var_50 = -6702256739319941219LL;
long long int var_51 = 229732582631895554LL;
int var_52 = 1179573203;
signed char var_53 = (signed char)14;
long long int var_54 = 2356635355214842646LL;
long long int var_55 = 8696859341749490964LL;
unsigned short var_56 = (unsigned short)37622;
int var_57 = 1220050368;
long long int var_58 = -2733156430358373153LL;
signed char var_59 = (signed char)94;
long long int var_60 = 4145518657085759395LL;
_Bool var_61 = (_Bool)0;
long long int var_62 = -1021140305567865630LL;
int var_63 = 73174224;
int var_64 = 303606897;
int var_65 = 2059606245;
_Bool var_66 = (_Bool)0;
int var_67 = -65233830;
unsigned long long int var_68 = 17230708986156423121ULL;
unsigned long long int var_69 = 10683928543589939434ULL;
long long int var_70 = 3802257528272527930LL;
long long int arr_0 [24] ;
signed char arr_1 [24] [24] ;
int arr_2 [24] ;
int arr_4 [24] ;
int arr_5 [24] [24] [24] ;
int arr_6 [24] ;
_Bool arr_9 [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] ;
long long int arr_11 [24] [24] [24] ;
long long int arr_12 [24] [24] [24] ;
unsigned long long int arr_13 [24] [24] [24] ;
long long int arr_15 [24] [24] [24] ;
unsigned long long int arr_16 [24] [24] [24] ;
unsigned long long int arr_18 [24] ;
unsigned long long int arr_19 [24] [24] ;
_Bool arr_20 [24] [24] ;
_Bool arr_21 [24] [24] [24] [24] [24] ;
_Bool arr_22 [24] [24] [24] ;
int arr_23 [24] [24] ;
signed char arr_25 [24] [24] [24] ;
long long int arr_30 [24] [24] [24] ;
unsigned short arr_32 [24] ;
int arr_38 [24] [24] [24] ;
long long int arr_40 [24] [24] [24] [24] [24] [24] [24] ;
int arr_46 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2469674122226831342LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1798589558;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1705136907;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1079149489;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 179886608;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 11888368316356306091ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3943834740045514255LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8494924280193689152LL : 5016109349244344628LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 8909118912189390762ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4738196915205124243LL : 1360239190497766180LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 11227074088795396746ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 9774951391052686526ULL : 1275219210560578748ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 2801453410754977176ULL : 11324101808590991286ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = 1178339770;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8795974366210174582LL : -2103087676485867704LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (unsigned short)26505;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = -632000646;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -3583591221194867029LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? -1686269040 : 1474589872;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
