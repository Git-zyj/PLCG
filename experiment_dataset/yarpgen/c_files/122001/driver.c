#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-6;
unsigned short var_4 = (unsigned short)11921;
signed char var_5 = (signed char)-39;
int var_6 = -255489393;
unsigned char var_7 = (unsigned char)135;
unsigned char var_8 = (unsigned char)36;
unsigned long long int var_9 = 10218447571176848679ULL;
int var_10 = -86448151;
unsigned int var_11 = 1094090448U;
int zero = 0;
unsigned short var_12 = (unsigned short)25888;
signed char var_13 = (signed char)-122;
unsigned char var_14 = (unsigned char)65;
long long int var_15 = 7332891009960972221LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3760642619207865354ULL;
unsigned int var_18 = 4032646387U;
int var_19 = 1081421778;
unsigned short var_20 = (unsigned short)62974;
signed char var_21 = (signed char)-118;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)44;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)116;
short var_26 = (short)1474;
unsigned long long int var_27 = 9340284306276272482ULL;
short var_28 = (short)27165;
long long int var_29 = -7800595193708422294LL;
unsigned char var_30 = (unsigned char)85;
unsigned long long int var_31 = 2508047155144191933ULL;
unsigned int var_32 = 444783890U;
unsigned short var_33 = (unsigned short)13362;
unsigned short var_34 = (unsigned short)10690;
unsigned char var_35 = (unsigned char)113;
unsigned long long int var_36 = 4110037361152212986ULL;
int var_37 = -1222966826;
signed char var_38 = (signed char)120;
unsigned int var_39 = 4119289543U;
signed char var_40 = (signed char)24;
unsigned short var_41 = (unsigned short)32459;
_Bool var_42 = (_Bool)1;
signed char var_43 = (signed char)-44;
short var_44 = (short)-16170;
signed char var_45 = (signed char)-40;
unsigned char arr_1 [15] ;
unsigned short arr_3 [15] ;
unsigned char arr_4 [15] [15] [15] ;
signed char arr_5 [15] [15] ;
_Bool arr_6 [15] [15] [15] ;
short arr_7 [15] [15] [15] [15] ;
unsigned short arr_8 [15] [15] [15] [15] [15] ;
signed char arr_9 [15] [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] [15] ;
int arr_13 [12] ;
unsigned short arr_14 [12] ;
unsigned long long int arr_15 [12] [12] ;
unsigned short arr_16 [12] ;
unsigned int arr_17 [12] [12] [12] ;
int arr_18 [12] ;
unsigned char arr_26 [12] ;
int arr_27 [12] [12] ;
int arr_28 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_31 [12] [12] [12] [12] [12] ;
_Bool arr_40 [12] [12] [12] [12] [12] ;
long long int arr_43 [12] [12] [12] [12] [12] [12] ;
int arr_44 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_46 [13] [13] ;
int arr_47 [13] ;
int arr_48 [13] [13] ;
short arr_52 [13] [13] ;
unsigned long long int arr_53 [13] ;
long long int arr_54 [13] ;
_Bool arr_56 [13] ;
unsigned long long int arr_11 [15] [15] [15] [15] [15] ;
unsigned short arr_12 [15] [15] [15] [15] ;
signed char arr_20 [12] ;
unsigned short arr_32 [12] [12] [12] [12] [12] ;
unsigned int arr_33 [12] ;
int arr_49 [13] ;
unsigned short arr_50 [13] ;
_Bool arr_51 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)5278;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)7772 : (short)13579;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)34987 : (unsigned short)51986;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 880992717U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 434456088;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (unsigned short)52431;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 5818622728502214293ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned short)42406;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 3418839952U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = -227197193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 1665509228 : -690796706;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1895788743;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -8248659262065367791LL : 6985637474450841863LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 314941713;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_46 [i_0] [i_1] = 2268597285U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_47 [i_0] = -1408420208;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_48 [i_0] [i_1] = 170759315;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_52 [i_0] [i_1] = (short)-29587;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_53 [i_0] = 2826817711886086254ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_54 [i_0] = 1287610965559452887LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_56 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 3600968131895929304ULL : 8630961783789122512ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)45809 : (unsigned short)45426;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)22570 : (unsigned short)12970;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_33 [i_0] = 193802624U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? -1450979710 : -664400871;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45659 : (unsigned short)48392;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
