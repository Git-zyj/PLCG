#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20295;
int var_2 = 39814986;
short var_3 = (short)25040;
unsigned long long int var_4 = 4780246998914248903ULL;
signed char var_5 = (signed char)-78;
unsigned int var_6 = 1316087948U;
unsigned long long int var_7 = 5664739295695185774ULL;
signed char var_8 = (signed char)57;
unsigned char var_9 = (unsigned char)43;
unsigned long long int var_10 = 12441348101472223036ULL;
unsigned int var_12 = 3782966411U;
unsigned long long int var_13 = 14999184925771582605ULL;
signed char var_14 = (signed char)-68;
_Bool var_15 = (_Bool)0;
short var_16 = (short)1818;
int zero = 0;
unsigned int var_18 = 3172548541U;
unsigned long long int var_19 = 8705381612262445277ULL;
int var_20 = -945148987;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4697145293863774016ULL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-105;
int var_25 = -1803140829;
unsigned short var_26 = (unsigned short)25443;
signed char var_27 = (signed char)115;
unsigned char var_28 = (unsigned char)211;
int var_29 = 997550914;
unsigned int var_30 = 3701904441U;
unsigned int var_31 = 127766173U;
short var_32 = (short)-15581;
unsigned short var_33 = (unsigned short)17172;
unsigned long long int var_34 = 3835591172670022600ULL;
unsigned long long int var_35 = 11550968069600513651ULL;
long long int var_36 = -7624362397790244944LL;
unsigned char var_37 = (unsigned char)175;
unsigned long long int var_38 = 16449103588622966934ULL;
short var_39 = (short)6081;
signed char var_40 = (signed char)118;
signed char var_41 = (signed char)-120;
unsigned char var_42 = (unsigned char)127;
unsigned int var_43 = 4174995887U;
signed char var_44 = (signed char)91;
unsigned int var_45 = 1094829503U;
unsigned char var_46 = (unsigned char)213;
unsigned int var_47 = 4248340783U;
unsigned int var_48 = 1861545902U;
int var_49 = 1027017916;
int var_50 = 420128019;
int var_51 = -836043992;
unsigned char var_52 = (unsigned char)133;
signed char var_53 = (signed char)-2;
unsigned char var_54 = (unsigned char)226;
unsigned long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_3 [13] ;
short arr_4 [13] [13] ;
short arr_5 [13] ;
short arr_6 [13] [13] [13] [13] ;
unsigned int arr_7 [13] ;
_Bool arr_12 [13] [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_14 [13] ;
_Bool arr_15 [13] [13] [13] [13] [13] ;
_Bool arr_18 [13] [13] [13] [13] [13] ;
signed char arr_19 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_24 [13] [13] [13] [13] ;
unsigned char arr_28 [13] [13] [13] [13] [13] [13] ;
short arr_29 [13] [13] [13] [13] ;
unsigned int arr_33 [13] [13] [13] ;
signed char arr_35 [13] [13] [13] [13] ;
long long int arr_37 [13] [13] ;
short arr_38 [13] [13] [13] [13] [13] [13] ;
short arr_40 [13] ;
unsigned long long int arr_46 [13] [13] [13] [13] [13] ;
unsigned int arr_53 [13] [13] [13] [13] ;
_Bool arr_58 [13] [13] [13] ;
unsigned short arr_8 [13] [13] [13] [13] ;
unsigned char arr_16 [13] [13] [13] [13] [13] ;
unsigned short arr_17 [13] ;
int arr_21 [13] [13] [13] [13] [13] ;
signed char arr_22 [13] [13] ;
unsigned short arr_23 [13] [13] ;
signed char arr_26 [13] [13] [13] [13] ;
unsigned char arr_27 [13] ;
unsigned int arr_36 [13] [13] [13] [13] ;
unsigned int arr_42 [13] [13] [13] [13] ;
unsigned int arr_47 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_50 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_51 [13] [13] [13] [13] ;
int arr_56 [13] ;
unsigned int arr_63 [13] [13] [13] ;
unsigned char arr_66 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3545592998379772804ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)29848 : (short)14087;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)31900 : (short)-21862;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-13797;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2694190111U : 3499050446U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2669101804816090554ULL : 16748100879826725303ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1937803390566726016ULL : 2937337958870689243ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (signed char)28 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)164 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)24473 : (short)-30727;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1536027362U : 2499773293U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)113 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? -3501346644329554661LL : -4007131754788340891LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)3573;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (short)-21237 : (short)-15150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 9775061600187402779ULL : 15002207612380723471ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 2804302785U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)38830 : (unsigned short)44297;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)51 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48916 : (unsigned short)6375;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1649510122 : 784787948;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)99 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42138 : (unsigned short)35285;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)37 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2039345890U : 2325127109U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2277038799U : 1981807929U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1244377232U : 3001358342U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)10719 : (unsigned short)64482;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? -1274538494 : 2044462064;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 199442473U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_66 [i_0] = (unsigned char)23;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_63 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_66 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
