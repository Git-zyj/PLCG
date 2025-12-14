#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
short var_1 = (short)-21461;
unsigned char var_2 = (unsigned char)202;
unsigned short var_3 = (unsigned short)36311;
int var_4 = -1024686970;
unsigned char var_5 = (unsigned char)44;
short var_6 = (short)-12117;
unsigned int var_7 = 3354798083U;
unsigned int var_8 = 1121783081U;
unsigned char var_9 = (unsigned char)207;
signed char var_10 = (signed char)28;
signed char var_11 = (signed char)30;
unsigned long long int var_12 = 4137110253115387527ULL;
short var_14 = (short)-1593;
int zero = 0;
short var_15 = (short)-9416;
unsigned long long int var_16 = 9462835170771790715ULL;
unsigned int var_17 = 737043495U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = 1440928396;
unsigned int var_21 = 3714240091U;
long long int var_22 = -9218384481602708359LL;
short var_23 = (short)22502;
unsigned long long int var_24 = 13883111999490433171ULL;
unsigned long long int var_25 = 18127778938345453287ULL;
long long int var_26 = 6041274258965429084LL;
int var_27 = 869364663;
unsigned char var_28 = (unsigned char)149;
short var_29 = (short)8588;
int var_30 = 1719618703;
int var_31 = 900316350;
unsigned int var_32 = 3334440912U;
int var_33 = 978982473;
long long int var_34 = -6749108821712479515LL;
unsigned int var_35 = 2667775231U;
unsigned char var_36 = (unsigned char)198;
unsigned int var_37 = 2929021713U;
unsigned short var_38 = (unsigned short)31893;
int var_39 = 2049829774;
unsigned char var_40 = (unsigned char)210;
unsigned char var_41 = (unsigned char)164;
long long int var_42 = 1125635727407863620LL;
unsigned char var_43 = (unsigned char)172;
long long int var_44 = 4509271305136022290LL;
unsigned char var_45 = (unsigned char)69;
unsigned char var_46 = (unsigned char)250;
signed char var_47 = (signed char)-93;
unsigned char var_48 = (unsigned char)55;
unsigned short var_49 = (unsigned short)10875;
unsigned char var_50 = (unsigned char)221;
unsigned int var_51 = 1733712007U;
signed char var_52 = (signed char)113;
long long int var_53 = 6253239219527260515LL;
unsigned char var_54 = (unsigned char)23;
unsigned char var_55 = (unsigned char)59;
unsigned int var_56 = 1184407584U;
short var_57 = (short)-21063;
unsigned char var_58 = (unsigned char)108;
signed char var_59 = (signed char)-124;
signed char var_60 = (signed char)9;
int var_61 = -1344417365;
unsigned char var_62 = (unsigned char)74;
signed char var_63 = (signed char)-96;
unsigned char var_64 = (unsigned char)108;
unsigned long long int var_65 = 10048527830074881583ULL;
unsigned long long int var_66 = 16057868076224426193ULL;
short var_67 = (short)3662;
unsigned long long int var_68 = 10837361720114668777ULL;
unsigned long long int var_69 = 1986675361097470414ULL;
unsigned char var_70 = (unsigned char)225;
_Bool var_71 = (_Bool)1;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
signed char arr_2 [22] ;
unsigned long long int arr_3 [22] [22] ;
int arr_4 [22] ;
unsigned int arr_5 [22] [22] ;
unsigned char arr_6 [22] ;
int arr_7 [22] [22] ;
unsigned char arr_9 [22] [22] [22] ;
unsigned int arr_10 [22] [22] [22] ;
short arr_11 [22] [22] [22] [22] ;
long long int arr_12 [22] ;
signed char arr_13 [22] [22] [22] [22] ;
unsigned char arr_15 [22] [22] [22] [22] ;
unsigned short arr_17 [22] [22] [22] [22] ;
signed char arr_18 [22] [22] [22] [22] [22] ;
int arr_19 [22] [22] [22] [22] [22] [22] [22] ;
unsigned short arr_20 [22] [22] [22] [22] ;
unsigned int arr_22 [22] [22] [22] [22] [22] [22] [22] ;
int arr_24 [22] ;
unsigned int arr_25 [22] ;
short arr_27 [22] [22] [22] [22] [22] ;
int arr_29 [22] [22] [22] ;
short arr_33 [22] [22] [22] ;
short arr_36 [22] [22] [22] ;
unsigned long long int arr_44 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_45 [22] [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)140 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)41324;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 15043218664691695842ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -571634806;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1847847614U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = -1380990298;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 124973107U : 2266281365U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)10023;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -734669497697934288LL : -6395669447099809923LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)40610;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-50 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1013654922;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59224;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2112549562U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = -1117863106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 704648510U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)8406 : (short)8364;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 568193011 : 1261749503;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)19537 : (short)-11725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (short)13744;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 16171771586864178171ULL : 1518240541489715935ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
