#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3370964791U;
long long int var_1 = -6245737453127153694LL;
unsigned short var_2 = (unsigned short)51921;
_Bool var_3 = (_Bool)0;
short var_4 = (short)22301;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 450101857U;
int var_7 = -939034188;
short var_9 = (short)23954;
unsigned short var_10 = (unsigned short)11150;
unsigned short var_11 = (unsigned short)64669;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)49510;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)-91;
unsigned int var_18 = 1299983593U;
int zero = 0;
short var_19 = (short)23823;
signed char var_20 = (signed char)22;
unsigned char var_21 = (unsigned char)160;
int var_22 = -1139404124;
signed char var_23 = (signed char)115;
signed char var_24 = (signed char)-126;
_Bool var_25 = (_Bool)0;
long long int var_26 = 4062098346615493286LL;
unsigned int var_27 = 3025824444U;
unsigned char var_28 = (unsigned char)162;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)17679;
unsigned int var_31 = 1003987873U;
int var_32 = -1006436168;
_Bool var_33 = (_Bool)0;
int var_34 = 956101053;
int var_35 = 2078211191;
unsigned short var_36 = (unsigned short)51828;
int var_37 = 1780556999;
unsigned short var_38 = (unsigned short)44457;
short var_39 = (short)17095;
short var_40 = (short)28360;
unsigned long long int var_41 = 12648902291160414526ULL;
unsigned short var_42 = (unsigned short)57969;
long long int var_43 = 3090611551084565837LL;
unsigned int var_44 = 3693791538U;
unsigned char arr_0 [14] ;
unsigned short arr_1 [14] ;
long long int arr_2 [14] ;
unsigned char arr_6 [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
unsigned char arr_8 [14] [14] [14] ;
unsigned short arr_10 [11] ;
unsigned short arr_11 [11] ;
long long int arr_14 [10] [10] ;
short arr_15 [10] ;
int arr_17 [10] ;
unsigned char arr_19 [20] ;
unsigned short arr_20 [20] ;
unsigned int arr_22 [20] ;
unsigned short arr_24 [20] [20] [20] ;
unsigned char arr_26 [20] ;
unsigned char arr_28 [20] [20] ;
short arr_29 [20] [20] [20] ;
unsigned long long int arr_31 [20] [20] ;
unsigned long long int arr_32 [20] [20] [20] ;
unsigned int arr_33 [20] [20] [20] [20] ;
_Bool arr_34 [20] [20] [20] ;
short arr_42 [20] [20] [20] ;
signed char arr_43 [20] [20] ;
unsigned int arr_45 [20] [20] ;
long long int arr_46 [20] [20] [20] [20] [20] ;
short arr_48 [20] [20] ;
int arr_51 [20] [20] [20] [20] [20] ;
long long int arr_9 [14] [14] [14] ;
_Bool arr_12 [11] ;
long long int arr_13 [11] ;
unsigned char arr_18 [10] ;
signed char arr_21 [20] ;
signed char arr_25 [20] ;
unsigned int arr_37 [20] [20] [20] [20] ;
short arr_38 [20] ;
unsigned short arr_41 [20] [20] [20] ;
unsigned char arr_44 [20] ;
short arr_52 [20] [20] [20] [20] ;
short arr_53 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36482 : (unsigned short)50769;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -8058014114365046502LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 15588771066894523404ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)30720;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned short)49868;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -2274168966088595979LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (short)18256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = -350814377;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned short)50184;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 329353709U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)34713 : (unsigned short)13368;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)224 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-5016 : (short)-7133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_31 [i_0] [i_1] = 5332594189160380970ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 4874295333991087782ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 2849075382U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (short)31177;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_43 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)96 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? 3907212596U : 3250317149U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = -767684362796036981LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_48 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)15304 : (short)19261;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = 2137302197;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3031747576258065510LL : -864762829941220409LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -6585993769852721754LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-89 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1235299435U : 3947290174U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (short)18486 : (short)-15688;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)21045 : (unsigned short)32636;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-20343 : (short)-17656;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-12435 : (short)-20397;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
