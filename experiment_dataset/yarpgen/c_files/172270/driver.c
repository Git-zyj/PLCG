#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3140852062658123398LL;
long long int var_3 = -1914011674465917568LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)48;
unsigned char var_7 = (unsigned char)197;
short var_8 = (short)21364;
long long int var_10 = 6943961540470944256LL;
unsigned char var_11 = (unsigned char)57;
long long int var_12 = -2410017118122857560LL;
unsigned long long int var_13 = 15861750435234443256ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int var_17 = -8487472437793043912LL;
int zero = 0;
unsigned char var_18 = (unsigned char)69;
unsigned char var_19 = (unsigned char)207;
unsigned char var_20 = (unsigned char)106;
unsigned char var_21 = (unsigned char)209;
long long int var_22 = -2718617483254786246LL;
unsigned char var_23 = (unsigned char)201;
unsigned char var_24 = (unsigned char)125;
short var_25 = (short)25680;
unsigned char var_26 = (unsigned char)208;
long long int var_27 = 5623777453755309076LL;
unsigned char var_28 = (unsigned char)208;
unsigned char var_29 = (unsigned char)79;
unsigned char var_30 = (unsigned char)71;
short var_31 = (short)29523;
long long int var_32 = 7802085399134885231LL;
long long int var_33 = 4277974984978828412LL;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)98;
short var_37 = (short)16397;
long long int var_38 = 947364989254527761LL;
long long int var_39 = 2693797290030985975LL;
long long int var_40 = 5228062627239441810LL;
long long int var_41 = 6241446520158742222LL;
_Bool var_42 = (_Bool)0;
unsigned long long int var_43 = 3408551101703498890ULL;
unsigned long long int var_44 = 897612054616694331ULL;
short var_45 = (short)-19078;
unsigned char var_46 = (unsigned char)182;
short var_47 = (short)16132;
long long int var_48 = 92087835329477007LL;
unsigned char var_49 = (unsigned char)174;
unsigned char var_50 = (unsigned char)194;
short var_51 = (short)4244;
long long int var_52 = 1827893948165421178LL;
long long int var_53 = 5752535518216368951LL;
short var_54 = (short)16208;
_Bool var_55 = (_Bool)1;
unsigned char var_56 = (unsigned char)240;
unsigned char var_57 = (unsigned char)42;
unsigned char var_58 = (unsigned char)92;
short var_59 = (short)-12572;
short var_60 = (short)-20841;
unsigned char var_61 = (unsigned char)4;
unsigned char var_62 = (unsigned char)243;
unsigned char var_63 = (unsigned char)44;
short var_64 = (short)10633;
long long int var_65 = 8044707202086715688LL;
_Bool var_66 = (_Bool)1;
unsigned char var_67 = (unsigned char)192;
long long int var_68 = -2847681412930516453LL;
long long int var_69 = 8620286451532273111LL;
_Bool var_70 = (_Bool)1;
_Bool var_71 = (_Bool)0;
unsigned char var_72 = (unsigned char)114;
long long int var_73 = -1628436554089237024LL;
unsigned long long int arr_0 [13] ;
long long int arr_1 [13] ;
short arr_2 [13] [13] [13] ;
long long int arr_4 [13] ;
unsigned char arr_7 [13] [13] [13] [13] ;
unsigned char arr_10 [13] [13] [13] [13] ;
long long int arr_12 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_17 [13] [13] [13] [13] ;
unsigned char arr_20 [13] [13] [13] [13] ;
long long int arr_21 [13] [13] [13] ;
unsigned char arr_22 [13] ;
short arr_25 [13] ;
long long int arr_34 [13] [13] [13] [13] [13] ;
long long int arr_38 [13] [13] ;
short arr_43 [13] [13] [13] [13] ;
long long int arr_50 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_54 [13] [13] [13] ;
unsigned long long int arr_85 [25] [25] [25] [25] ;
unsigned char arr_87 [25] [25] ;
_Bool arr_88 [25] [25] ;
long long int arr_90 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 13366468566893080313ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -3094734214861022863LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-3393;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4452129646743095582LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)71 : (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -6195517822025117216LL : -6579408791929882890LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)101 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5435800083926668648LL : -1477421900466614976LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (short)-26225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -8759734843937984905LL : 1221220737250310907LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_38 [i_0] [i_1] = 4726600492853030943LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (short)21136;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 4445701147847502423LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_85 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2599520512021983565ULL : 3897830169162415803ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_87 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_88 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_90 [i_0] [i_1] = (i_0 % 2 == 0) ? 2920140385730230628LL : 7600206797444059802LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
