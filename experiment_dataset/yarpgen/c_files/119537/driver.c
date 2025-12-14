#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned short var_2 = (unsigned short)25311;
unsigned long long int var_3 = 1825495909041743639ULL;
int var_4 = 853708055;
unsigned long long int var_5 = 340350080968427848ULL;
signed char var_6 = (signed char)-74;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 120592693U;
_Bool var_9 = (_Bool)0;
int var_11 = -1592672052;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3797673364360341206ULL;
unsigned char var_14 = (unsigned char)116;
unsigned char var_15 = (unsigned char)131;
unsigned char var_16 = (unsigned char)118;
int zero = 0;
unsigned char var_17 = (unsigned char)172;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16761240153852617768ULL;
unsigned char var_20 = (unsigned char)159;
unsigned long long int var_21 = 14830125026531061292ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)82;
unsigned short var_24 = (unsigned short)20097;
unsigned short var_25 = (unsigned short)16771;
unsigned long long int var_26 = 11021571903660803700ULL;
unsigned char var_27 = (unsigned char)173;
unsigned long long int var_28 = 13924088897286900255ULL;
int var_29 = 711720115;
unsigned short var_30 = (unsigned short)24715;
int var_31 = 1727759242;
unsigned long long int var_32 = 15892365482472134101ULL;
int var_33 = -1374581451;
unsigned short var_34 = (unsigned short)11909;
unsigned long long int var_35 = 4386726494253001414ULL;
_Bool var_36 = (_Bool)1;
int var_37 = -853113824;
int var_38 = -1649929010;
unsigned short var_39 = (unsigned short)22372;
unsigned int var_40 = 170828803U;
unsigned long long int var_41 = 3063493736858031827ULL;
unsigned long long int var_42 = 14207863503787984877ULL;
unsigned long long int var_43 = 1712278801400598922ULL;
unsigned long long int var_44 = 14612048147160500184ULL;
unsigned long long int var_45 = 12747881427054507508ULL;
unsigned short var_46 = (unsigned short)40347;
unsigned long long int var_47 = 11513174394989335985ULL;
int var_48 = -1163767183;
unsigned char var_49 = (unsigned char)61;
int var_50 = -1400617793;
unsigned short var_51 = (unsigned short)44742;
unsigned long long int var_52 = 10222385886735896770ULL;
unsigned short var_53 = (unsigned short)62030;
unsigned short var_54 = (unsigned short)45324;
unsigned short var_55 = (unsigned short)40040;
unsigned long long int var_56 = 539934244311860557ULL;
unsigned long long int var_57 = 8157458120932260469ULL;
int var_58 = 1986420069;
_Bool var_59 = (_Bool)1;
signed char var_60 = (signed char)-117;
unsigned long long int var_61 = 7061750136883541394ULL;
unsigned long long int var_62 = 3487896211076418911ULL;
unsigned int var_63 = 310601745U;
unsigned long long int var_64 = 748843713938761660ULL;
int var_65 = -1790047220;
_Bool var_66 = (_Bool)1;
unsigned char var_67 = (unsigned char)3;
signed char var_68 = (signed char)-79;
unsigned long long int var_69 = 7569629383540623428ULL;
unsigned long long int var_70 = 15020997502026754509ULL;
unsigned short var_71 = (unsigned short)14122;
unsigned char var_72 = (unsigned char)255;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned long long int arr_3 [14] ;
int arr_5 [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
int arr_7 [18] ;
unsigned long long int arr_9 [18] [18] ;
int arr_10 [18] [18] [18] [18] ;
int arr_11 [18] [18] [18] [18] ;
unsigned short arr_12 [18] [18] ;
int arr_13 [18] ;
unsigned short arr_14 [18] ;
int arr_15 [18] [18] [18] ;
int arr_17 [18] [18] [18] ;
int arr_18 [18] [18] ;
unsigned short arr_27 [11] ;
unsigned short arr_28 [11] [11] [11] ;
int arr_34 [11] [11] ;
int arr_45 [11] ;
unsigned long long int arr_49 [11] [11] ;
signed char arr_67 [11] [11] [11] ;
unsigned char arr_76 [21] ;
unsigned short arr_92 [18] [18] ;
_Bool arr_94 [18] ;
unsigned long long int arr_103 [18] [18] ;
unsigned int arr_104 [18] [18] [18] [18] ;
int arr_106 [18] [18] [18] ;
unsigned long long int arr_107 [18] [18] [18] [18] [18] ;
int arr_110 [18] ;
unsigned long long int arr_119 [18] [18] [18] [18] ;
unsigned char arr_20 [18] ;
unsigned long long int arr_21 [18] ;
signed char arr_22 [18] ;
unsigned short arr_37 [11] [11] ;
int arr_38 [11] [11] [11] ;
unsigned char arr_44 [11] [11] ;
unsigned int arr_48 [11] ;
unsigned int arr_51 [11] [11] [11] ;
unsigned char arr_52 [11] ;
unsigned long long int arr_55 [11] ;
int arr_66 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_74 [11] [11] [11] ;
unsigned long long int arr_77 [21] [21] ;
unsigned long long int arr_81 [13] [13] ;
int arr_102 [18] [18] [18] ;
signed char arr_108 [18] [18] [18] [18] [18] ;
int arr_114 [18] ;
int arr_115 [18] ;
int arr_125 [18] [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 12281422133900663793ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1100729984;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3862361443U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 857089442160316941ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -225311059;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17138223459094377029ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -1973570585;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 12593274617663359533ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 835571523;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1874929491;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)11666;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -1472800426;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)45210;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1919396025;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 619196542;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -1562753507 : -1625458295;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9291 : (unsigned short)58384;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)60089 : (unsigned short)46075;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? -1274541936 : 421788367;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = 1407365107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_49 [i_0] [i_1] = 12709390731985776892ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_76 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_92 [i_0] [i_1] = (unsigned short)26496;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_94 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_103 [i_0] [i_1] = 5706943069181656497ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_104 [i_0] [i_1] [i_2] [i_3] = 1287974276U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_106 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -695386753 : 298112734;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_107 [i_0] [i_1] [i_2] [i_3] [i_4] = 4797537304322389076ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_110 [i_0] = 2058103508;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_119 [i_0] [i_1] [i_2] [i_3] = 16018630107054832116ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 15169415460768228945ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)33987 : (unsigned short)19650;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1816951651 : -158703300;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_44 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_48 [i_0] = 1825528628U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 485530480U : 51047379U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_55 [i_0] = 2407460166138394666ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -632905884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = 17856235089080805671ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_77 [i_0] [i_1] = 4677811977506424419ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_81 [i_0] [i_1] = 4547968418883422491ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_102 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1420953290 : 1157430587;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_108 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)39 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_114 [i_0] = -1302799742;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_115 [i_0] = 520275675;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_125 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 556624721;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_74 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_77 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_81 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_102 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_108 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_114 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_115 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_125 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
