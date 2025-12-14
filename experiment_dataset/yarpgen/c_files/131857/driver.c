#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16053512936265039003ULL;
unsigned int var_1 = 2320638681U;
signed char var_2 = (signed char)-127;
unsigned int var_3 = 1053037034U;
unsigned int var_4 = 1686153685U;
unsigned long long int var_5 = 12380620065220809098ULL;
long long int var_6 = -7521909945674569339LL;
short var_7 = (short)-7415;
unsigned long long int var_8 = 14862035936118458098ULL;
unsigned int var_9 = 2801328584U;
short var_10 = (short)6483;
unsigned int var_11 = 4277678540U;
short var_12 = (short)-4608;
unsigned long long int var_13 = 8846116727621086374ULL;
short var_14 = (short)26330;
long long int var_15 = 8494237753348328601LL;
int var_16 = 311423250;
unsigned short var_17 = (unsigned short)23448;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1363201228;
unsigned long long int var_20 = 2336755824402154881ULL;
unsigned long long int var_21 = 15749784751202699041ULL;
long long int var_22 = -8195018578659213929LL;
long long int var_23 = -4591813545189238211LL;
short var_24 = (short)16166;
unsigned long long int var_25 = 2418498279376690297ULL;
int var_26 = 324939279;
int var_27 = -105925284;
unsigned int var_28 = 247136695U;
unsigned long long int var_29 = 16893706354132734141ULL;
long long int var_30 = 2198745090783970708LL;
short var_31 = (short)-21698;
unsigned long long int var_32 = 13979071916287650808ULL;
signed char var_33 = (signed char)-55;
unsigned long long int var_34 = 6652734613176998673ULL;
unsigned int var_35 = 3590129550U;
unsigned long long int var_36 = 7054312047243045756ULL;
unsigned int var_37 = 3405103934U;
unsigned long long int var_38 = 5426888415361454577ULL;
unsigned long long int var_39 = 2212898604807791101ULL;
unsigned long long int var_40 = 8970712643757081578ULL;
long long int var_41 = 5441397665355229223LL;
unsigned int var_42 = 1860265692U;
short var_43 = (short)32530;
long long int var_44 = 6693541199032594478LL;
unsigned int var_45 = 2584010203U;
unsigned int var_46 = 698485567U;
_Bool var_47 = (_Bool)0;
unsigned short var_48 = (unsigned short)43947;
unsigned long long int var_49 = 7965789245007511327ULL;
unsigned long long int var_50 = 14362652017628516649ULL;
unsigned char var_51 = (unsigned char)242;
int var_52 = -934232714;
unsigned long long int var_53 = 5298823799610278744ULL;
long long int var_54 = 3874160219318076025LL;
short var_55 = (short)28701;
unsigned int var_56 = 1856493748U;
short var_57 = (short)6924;
unsigned long long int var_58 = 17846136504105276606ULL;
unsigned int var_59 = 2582402299U;
int var_60 = -88040626;
unsigned int var_61 = 3287821146U;
long long int var_62 = -2977871543469012783LL;
unsigned short var_63 = (unsigned short)34343;
int var_64 = -1337418315;
unsigned int var_65 = 1373819800U;
short var_66 = (short)27414;
long long int var_67 = 6743553263937153165LL;
int var_68 = -1871050559;
long long int var_69 = -3911092700354932603LL;
short var_70 = (short)26757;
int var_71 = -492164281;
short var_72 = (short)2684;
short var_73 = (short)-2834;
signed char var_74 = (signed char)111;
unsigned int var_75 = 2511016730U;
short var_76 = (short)17962;
short var_77 = (short)-24449;
short var_78 = (short)-22504;
unsigned short var_79 = (unsigned short)5549;
signed char var_80 = (signed char)-85;
signed char var_81 = (signed char)30;
long long int var_82 = 4463062610466552893LL;
unsigned short var_83 = (unsigned short)11844;
unsigned long long int var_84 = 4309618980650311884ULL;
_Bool var_85 = (_Bool)1;
unsigned long long int var_86 = 7129874939994385973ULL;
unsigned int var_87 = 4246795747U;
signed char arr_0 [16] ;
short arr_2 [16] [16] ;
unsigned int arr_3 [22] ;
long long int arr_5 [22] ;
short arr_6 [22] [22] [22] ;
unsigned short arr_7 [22] [22] ;
signed char arr_9 [22] [22] [22] ;
unsigned int arr_11 [22] [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] ;
int arr_14 [22] [22] [22] ;
unsigned int arr_15 [22] [22] [22] ;
unsigned long long int arr_18 [22] [22] [22] [22] ;
signed char arr_19 [22] [22] [22] ;
unsigned long long int arr_21 [22] ;
short arr_23 [22] [22] [22] [22] [22] ;
unsigned short arr_25 [22] [22] [22] ;
unsigned long long int arr_26 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_27 [22] [22] [22] [22] ;
long long int arr_28 [22] [22] [22] [22] [22] [22] ;
long long int arr_31 [22] [22] [22] [22] [22] [22] ;
signed char arr_37 [18] ;
long long int arr_39 [18] ;
unsigned long long int arr_40 [18] [18] ;
unsigned int arr_41 [18] [18] [18] [18] ;
int arr_47 [18] [18] [18] [18] [18] ;
unsigned int arr_49 [25] ;
signed char arr_51 [25] [25] ;
_Bool arr_52 [20] [20] ;
long long int arr_64 [20] [20] [20] [20] [20] [20] ;
int arr_70 [20] [20] [20] [20] [20] ;
unsigned long long int arr_72 [20] ;
unsigned short arr_74 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)22406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1569786977U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 5586073697046293580LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)25259;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)14975;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3130084082U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 14225439606723315748ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -924896956;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2780514063U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8217106919564210950ULL : 10984005720746822033ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)22 : (signed char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 256132318278817600ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)25751 : (short)-10604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)2915;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3725478419816658762ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -5642118738445781473LL : -8510317665802125918LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -6320832784577846351LL : 389307335824859270LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = 7701485344500585065LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_40 [i_0] [i_1] = 6291429072007698581ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3676846533U : 4102865783U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = -695979364;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = 923558621U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_51 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_52 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2972222914660416277LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] = 627256053;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_72 [i_0] = 11807798933429016591ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)48541;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
