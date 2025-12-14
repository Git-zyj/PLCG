#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4592162267389628665ULL;
int var_1 = 463855623;
_Bool var_2 = (_Bool)1;
long long int var_3 = -4962723898223342374LL;
unsigned char var_4 = (unsigned char)199;
signed char var_5 = (signed char)-67;
unsigned short var_7 = (unsigned short)18855;
int var_8 = -434742187;
unsigned short var_9 = (unsigned short)62830;
long long int var_11 = 2787205551338600322LL;
long long int var_12 = 8443511116303853374LL;
long long int var_13 = 2851538888551858065LL;
long long int var_14 = -2932671208384381476LL;
int zero = 0;
long long int var_15 = 4189523888581689022LL;
unsigned short var_16 = (unsigned short)14268;
unsigned short var_17 = (unsigned short)62021;
unsigned char var_18 = (unsigned char)90;
unsigned long long int var_19 = 13290740823093523593ULL;
long long int var_20 = -4386014444794922989LL;
short var_21 = (short)19930;
short var_22 = (short)22254;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-15076;
int var_25 = -1449622221;
long long int var_26 = 6833270375398425275LL;
int var_27 = 587193663;
short var_28 = (short)28920;
unsigned short var_29 = (unsigned short)53210;
unsigned long long int var_30 = 6782801020268139944ULL;
int var_31 = -1673124429;
unsigned short var_32 = (unsigned short)52706;
unsigned int var_33 = 702070972U;
short var_34 = (short)11149;
unsigned short var_35 = (unsigned short)59041;
unsigned int var_36 = 1282963649U;
unsigned long long int var_37 = 13807289675313124035ULL;
unsigned long long int var_38 = 16400080068952221288ULL;
signed char var_39 = (signed char)66;
long long int var_40 = 6867957754369731653LL;
unsigned short var_41 = (unsigned short)50869;
unsigned long long int var_42 = 2434726171527005955ULL;
unsigned long long int var_43 = 4976591462264741453ULL;
unsigned long long int var_44 = 14149826708891170339ULL;
unsigned char var_45 = (unsigned char)17;
unsigned char arr_0 [19] ;
long long int arr_1 [19] ;
short arr_2 [19] ;
long long int arr_3 [19] ;
long long int arr_4 [19] ;
short arr_5 [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] [19] ;
long long int arr_9 [19] [19] [19] ;
short arr_12 [19] [19] [19] [19] [19] ;
long long int arr_15 [19] [19] ;
int arr_16 [19] [19] [19] ;
short arr_17 [19] [19] [19] ;
short arr_19 [19] [19] [19] ;
unsigned short arr_20 [19] [19] ;
short arr_22 [19] [19] ;
unsigned char arr_29 [19] [19] [19] [19] ;
long long int arr_31 [19] ;
signed char arr_32 [19] [19] [19] [19] ;
long long int arr_35 [19] [19] ;
long long int arr_37 [19] [19] [19] [19] [19] [19] ;
short arr_41 [19] [19] [19] [19] [19] ;
long long int arr_48 [19] [19] [19] [19] ;
long long int arr_49 [19] [19] [19] ;
unsigned short arr_52 [19] ;
long long int arr_53 [19] ;
unsigned long long int arr_55 [19] [19] ;
int arr_57 [19] [19] [19] ;
short arr_70 [19] [19] [19] ;
short arr_13 [19] ;
short arr_18 [19] ;
long long int arr_21 [19] [19] [19] ;
unsigned long long int arr_26 [19] [19] [19] [19] ;
signed char arr_27 [19] [19] [19] [19] ;
_Bool arr_30 [19] ;
unsigned short arr_33 [19] [19] [19] [19] ;
unsigned int arr_34 [19] [19] ;
unsigned short arr_40 [19] [19] [19] [19] [19] ;
short arr_47 [19] [19] ;
short arr_54 [19] ;
short arr_58 [19] [19] ;
long long int arr_59 [19] ;
short arr_62 [19] [19] ;
_Bool arr_71 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -4007007517713856906LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)23830 : (short)6345;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7253642121011264205LL : 7593205415486552276LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8102972381008446295LL : -4730186931497714613LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-26407 : (short)11536;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35402;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8321509052632429206LL : 777158897519878306LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-10806 : (short)-7520;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 2440568059468720855LL : 1619998574497530726LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -1047201098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-30289 : (short)13555;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-4664 : (short)6569;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3338 : (unsigned short)64758;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -2035448459233930014LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? -4582977137482913726LL : -4334371109888881514LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1463723711752884485LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)9016 : (short)22395;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 1394259891924258122LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 2996392403465340415LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_52 [i_0] = (unsigned short)55877;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_53 [i_0] = 133358607722060017LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_55 [i_0] [i_1] = (i_0 % 2 == 0) ? 15015763288769220584ULL : 18087831411741917172ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -315387206 : -1694587417;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (short)-2282;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)6365 : (short)-29226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)29702 : (short)2109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2738031113150870539LL : 7769159424677846568LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 15680905363488002365ULL : 14085669176251358671ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-16 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)59421 : (unsigned short)28949;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 2466548362U : 115592520U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)44349 : (unsigned short)62145;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31022 : (short)1891;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_54 [i_0] = (short)21529;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20322 : (short)27524;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? 1517014719059524915LL : 8911476785291775488LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_62 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6816 : (short)-5620;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_71 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_71 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
