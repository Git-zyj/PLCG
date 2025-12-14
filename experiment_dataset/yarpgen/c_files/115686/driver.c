#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25923;
unsigned char var_1 = (unsigned char)38;
short var_2 = (short)10209;
unsigned char var_3 = (unsigned char)119;
unsigned char var_4 = (unsigned char)232;
unsigned short var_5 = (unsigned short)1817;
short var_6 = (short)-19278;
short var_7 = (short)-17617;
unsigned char var_8 = (unsigned char)230;
unsigned char var_9 = (unsigned char)67;
long long int var_10 = -64258843815416287LL;
short var_11 = (short)-30919;
unsigned short var_12 = (unsigned short)45901;
unsigned char var_13 = (unsigned char)77;
unsigned char var_14 = (unsigned char)255;
int var_15 = 1631359634;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-31802;
int zero = 0;
unsigned char var_20 = (unsigned char)130;
unsigned int var_21 = 2706304312U;
short var_22 = (short)-31718;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)23;
unsigned long long int var_25 = 3862362111250277108ULL;
short var_26 = (short)-6838;
unsigned short var_27 = (unsigned short)35305;
short var_28 = (short)-14482;
unsigned char var_29 = (unsigned char)89;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)30;
int var_32 = -1073681408;
short var_33 = (short)-30387;
unsigned short var_34 = (unsigned short)8239;
short var_35 = (short)12670;
int var_36 = 1772740688;
unsigned char var_37 = (unsigned char)212;
long long int var_38 = 1186232185719171732LL;
unsigned char var_39 = (unsigned char)8;
unsigned char var_40 = (unsigned char)104;
int var_41 = 236163995;
unsigned char var_42 = (unsigned char)156;
signed char var_43 = (signed char)-74;
unsigned int var_44 = 404242975U;
unsigned short var_45 = (unsigned short)62845;
int var_46 = -1320912202;
_Bool var_47 = (_Bool)0;
unsigned char var_48 = (unsigned char)14;
int var_49 = 1363600498;
unsigned char var_50 = (unsigned char)205;
short var_51 = (short)-22255;
unsigned short var_52 = (unsigned short)50304;
unsigned char var_53 = (unsigned char)1;
unsigned char var_54 = (unsigned char)84;
unsigned short var_55 = (unsigned short)7884;
signed char var_56 = (signed char)8;
unsigned short var_57 = (unsigned short)56095;
short var_58 = (short)-10332;
unsigned short var_59 = (unsigned short)4966;
_Bool var_60 = (_Bool)0;
int var_61 = 741673883;
short var_62 = (short)1884;
short var_63 = (short)24396;
unsigned char var_64 = (unsigned char)206;
unsigned long long int var_65 = 8275574229994467449ULL;
unsigned char var_66 = (unsigned char)107;
int var_67 = 79895432;
short var_68 = (short)14495;
short var_69 = (short)-9099;
unsigned char var_70 = (unsigned char)181;
unsigned char var_71 = (unsigned char)57;
int var_72 = -1183887904;
unsigned short var_73 = (unsigned short)50663;
short var_74 = (short)-11645;
signed char var_75 = (signed char)-72;
unsigned char var_76 = (unsigned char)23;
int var_77 = 1796008001;
unsigned short var_78 = (unsigned short)36513;
unsigned short var_79 = (unsigned short)16021;
_Bool var_80 = (_Bool)0;
signed char var_81 = (signed char)25;
int var_82 = -412767909;
signed char var_83 = (signed char)-123;
unsigned int var_84 = 3193151275U;
long long int var_85 = 1016618338814564922LL;
unsigned char var_86 = (unsigned char)157;
short var_87 = (short)-21157;
signed char var_88 = (signed char)-61;
_Bool var_89 = (_Bool)0;
unsigned char var_90 = (unsigned char)98;
int var_91 = -874421818;
_Bool var_92 = (_Bool)0;
unsigned char var_93 = (unsigned char)199;
short var_94 = (short)-550;
signed char var_95 = (signed char)93;
unsigned char var_96 = (unsigned char)19;
_Bool var_97 = (_Bool)0;
short var_98 = (short)27867;
signed char var_99 = (signed char)122;
signed char var_100 = (signed char)-3;
signed char var_101 = (signed char)-48;
unsigned char var_102 = (unsigned char)53;
_Bool var_103 = (_Bool)0;
unsigned char var_104 = (unsigned char)242;
short var_105 = (short)-29336;
_Bool var_106 = (_Bool)1;
_Bool var_107 = (_Bool)0;
short var_108 = (short)20924;
short var_109 = (short)20992;
unsigned char var_110 = (unsigned char)220;
_Bool arr_0 [14] ;
short arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_4 [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
unsigned char arr_11 [21] ;
unsigned short arr_12 [21] ;
short arr_13 [21] ;
short arr_14 [21] ;
int arr_16 [21] [21] ;
unsigned char arr_18 [21] [21] [21] ;
_Bool arr_19 [21] [21] [21] ;
unsigned int arr_20 [21] ;
short arr_21 [21] [21] ;
unsigned short arr_22 [21] [21] [21] ;
unsigned char arr_23 [21] [21] [21] ;
short arr_25 [21] [21] ;
signed char arr_26 [21] [21] [21] ;
signed char arr_27 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_28 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_29 [21] [21] [21] [21] [21] [21] ;
int arr_30 [21] [21] [21] [21] ;
unsigned long long int arr_35 [21] ;
signed char arr_36 [21] [21] [21] [21] [21] [21] [21] ;
short arr_39 [21] [21] [21] [21] [21] ;
unsigned char arr_40 [21] [21] [21] ;
signed char arr_43 [21] [21] ;
signed char arr_46 [21] [21] [21] ;
unsigned short arr_49 [21] [21] ;
_Bool arr_51 [21] [21] [21] [21] [21] ;
unsigned char arr_54 [21] [21] [21] [21] ;
_Bool arr_55 [21] ;
short arr_62 [21] [21] [21] [21] [21] ;
short arr_63 [21] [21] [21] ;
_Bool arr_64 [21] [21] [21] [21] [21] [21] ;
_Bool arr_68 [21] [21] [21] [21] [21] ;
unsigned char arr_70 [21] [21] [21] [21] [21] [21] [21] ;
int arr_72 [21] [21] [21] ;
unsigned long long int arr_77 [21] [21] [21] [21] ;
signed char arr_80 [21] ;
unsigned char arr_82 [21] [21] ;
short arr_85 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-32442 : (short)-6294;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)15572;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6575350997625110663ULL : 4733972133067345946ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)254 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)53944;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)30700;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (short)13736;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 1573569719;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 2206973829U : 3424823330U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-28105 : (short)-10599;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)47734;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)136 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (short)-27293;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)61431 : (unsigned short)8655;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 227401185;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 9064204487346922391ULL : 5029625638855168891ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-462 : (short)-25056;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-124 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_49 [i_0] [i_1] = (unsigned short)12247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_55 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-24809 : (short)13725;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)26167 : (short)26424;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_70 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = -1471900526;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1893112681235558733ULL : 17285927223509032024ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_80 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_82 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)5271;
}

void checksum() {
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
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
    hash(&seed, var_100);
    hash(&seed, var_101);
    hash(&seed, var_102);
    hash(&seed, var_103);
    hash(&seed, var_104);
    hash(&seed, var_105);
    hash(&seed, var_106);
    hash(&seed, var_107);
    hash(&seed, var_108);
    hash(&seed, var_109);
    hash(&seed, var_110);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
