#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned long long int var_2 = 5262448755907764361ULL;
unsigned long long int var_3 = 153802336103073325ULL;
unsigned short var_4 = (unsigned short)39153;
unsigned long long int var_5 = 15801966509235131805ULL;
unsigned char var_8 = (unsigned char)55;
int var_9 = 1307176264;
int zero = 0;
unsigned long long int var_10 = 8702106748101838357ULL;
short var_11 = (short)24449;
signed char var_12 = (signed char)65;
short var_13 = (short)8040;
unsigned short var_14 = (unsigned short)29821;
_Bool var_15 = (_Bool)0;
int var_16 = 1270862267;
signed char var_17 = (signed char)-58;
int var_18 = -809386212;
short var_19 = (short)-28532;
unsigned int var_20 = 3160912889U;
int var_21 = 1482235231;
long long int var_22 = -1780296328799482496LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)48676;
unsigned short var_25 = (unsigned short)19267;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)0;
long long int var_28 = -4592774774334437395LL;
unsigned short var_29 = (unsigned short)59070;
unsigned long long int var_30 = 3912575480212319408ULL;
long long int var_31 = 8635554530791081617LL;
unsigned char var_32 = (unsigned char)113;
unsigned short var_33 = (unsigned short)7330;
long long int var_34 = 4657964737825686067LL;
unsigned int var_35 = 2533149128U;
unsigned int var_36 = 1610836524U;
unsigned long long int var_37 = 13216694069004193732ULL;
signed char var_38 = (signed char)51;
short var_39 = (short)6887;
long long int var_40 = 3921589235748998184LL;
long long int var_41 = -7584275043803873351LL;
unsigned int var_42 = 3602413114U;
unsigned char var_43 = (unsigned char)37;
long long int var_44 = 2454763116128772991LL;
short var_45 = (short)3245;
unsigned int var_46 = 2320375792U;
signed char var_47 = (signed char)116;
unsigned int var_48 = 1876367412U;
int var_49 = -1378653637;
unsigned char var_50 = (unsigned char)156;
_Bool var_51 = (_Bool)1;
int var_52 = 1383212052;
short var_53 = (short)4888;
int var_54 = 1021268856;
_Bool var_55 = (_Bool)1;
unsigned long long int var_56 = 5750956906786699316ULL;
_Bool var_57 = (_Bool)1;
unsigned short var_58 = (unsigned short)55490;
signed char var_59 = (signed char)-116;
unsigned short var_60 = (unsigned short)19141;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] ;
int arr_4 [25] [25] [25] ;
short arr_5 [25] ;
unsigned char arr_6 [25] [25] [25] ;
unsigned int arr_7 [25] ;
short arr_8 [25] [25] [25] ;
unsigned int arr_10 [25] [25] ;
_Bool arr_12 [25] [25] [25] [25] ;
short arr_14 [25] [25] [25] [25] [25] [25] ;
_Bool arr_16 [25] [25] [25] [25] [25] ;
unsigned short arr_19 [25] [25] [25] [25] [25] ;
short arr_20 [25] [25] [25] [25] [25] ;
unsigned long long int arr_21 [25] ;
long long int arr_22 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_29 [25] [25] [25] [25] [25] ;
int arr_35 [25] [25] [25] [25] ;
long long int arr_36 [25] [25] [25] ;
int arr_37 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_41 [25] [25] [25] [25] [25] [25] ;
_Bool arr_49 [25] ;
unsigned int arr_50 [25] [25] [25] [25] ;
unsigned char arr_52 [25] [25] [25] ;
unsigned long long int arr_63 [25] ;
long long int arr_74 [14] [14] [14] ;
int arr_31 [25] ;
_Bool arr_42 [25] [25] [25] [25] [25] ;
long long int arr_43 [25] ;
signed char arr_44 [25] ;
unsigned long long int arr_47 [25] [25] ;
_Bool arr_62 [25] [25] [25] [25] ;
signed char arr_65 [25] [25] [25] [25] ;
short arr_73 [14] ;
short arr_83 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3694989330U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1791600476U : 519845856U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1160843842U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2050097240;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-32482;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3655796454U : 808071880U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-17020;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 3134002480U : 2636451361U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)19830;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23754;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 15297471146780987371ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1479942062550382307LL : -3557474368381050892LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)11114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 185140741;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7624859722014956906LL : 1324896057564436973LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1464609019;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12415970717682843406ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1573999088U : 110534796U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_63 [i_0] = 7899537902346248931ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = 7540663969818752816LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 948770943 : -624015320;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? -5672502829423049118LL : -4029118658689536686LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? 15954046270683598883ULL : 10979351170695686139ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)47 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_73 [i_0] = (short)30533;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_83 [i_0] [i_1] = (short)21370;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_62 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_73 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_83 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
