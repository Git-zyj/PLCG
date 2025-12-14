#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12757;
short var_1 = (short)-32115;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)234;
unsigned int var_5 = 2722951188U;
unsigned char var_6 = (unsigned char)252;
int var_7 = 1595052496;
short var_8 = (short)-32194;
long long int var_9 = 7663104414130826496LL;
unsigned char var_10 = (unsigned char)242;
long long int var_11 = -7861702950097375419LL;
long long int var_12 = -6877238798205058916LL;
short var_13 = (short)3489;
int var_14 = -158096482;
short var_15 = (short)23896;
signed char var_16 = (signed char)-68;
short var_17 = (short)18607;
int zero = 0;
short var_18 = (short)-27535;
unsigned char var_19 = (unsigned char)32;
signed char var_20 = (signed char)71;
unsigned char var_21 = (unsigned char)220;
unsigned short var_22 = (unsigned short)15177;
long long int var_23 = -4738964790421422480LL;
unsigned int var_24 = 1921005598U;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)178;
unsigned short var_27 = (unsigned short)46013;
unsigned char var_28 = (unsigned char)193;
unsigned char var_29 = (unsigned char)126;
signed char var_30 = (signed char)-79;
unsigned int var_31 = 3418974464U;
_Bool var_32 = (_Bool)1;
long long int var_33 = 4425636680259488897LL;
signed char var_34 = (signed char)43;
signed char var_35 = (signed char)11;
unsigned char var_36 = (unsigned char)219;
int var_37 = 809076064;
_Bool var_38 = (_Bool)0;
unsigned char var_39 = (unsigned char)146;
signed char var_40 = (signed char)-26;
unsigned char var_41 = (unsigned char)11;
short var_42 = (short)16562;
signed char var_43 = (signed char)6;
unsigned char var_44 = (unsigned char)64;
unsigned long long int var_45 = 2910078085222844109ULL;
unsigned long long int var_46 = 9951123694228226936ULL;
short var_47 = (short)20357;
_Bool var_48 = (_Bool)1;
unsigned short var_49 = (unsigned short)53447;
long long int var_50 = 8294489446502431556LL;
_Bool var_51 = (_Bool)0;
unsigned long long int var_52 = 16974802859896495002ULL;
unsigned short var_53 = (unsigned short)62251;
unsigned char var_54 = (unsigned char)202;
long long int var_55 = 9158143925952685846LL;
unsigned short var_56 = (unsigned short)47571;
unsigned char var_57 = (unsigned char)230;
int var_58 = -881203462;
long long int var_59 = 4971961817917602961LL;
unsigned short var_60 = (unsigned short)25153;
signed char var_61 = (signed char)60;
int var_62 = -1274731107;
_Bool var_63 = (_Bool)1;
_Bool var_64 = (_Bool)1;
unsigned char var_65 = (unsigned char)227;
unsigned short var_66 = (unsigned short)49124;
unsigned char var_67 = (unsigned char)255;
unsigned char var_68 = (unsigned char)38;
unsigned char var_69 = (unsigned char)71;
unsigned short var_70 = (unsigned short)24025;
_Bool var_71 = (_Bool)0;
int var_72 = 567220187;
unsigned short var_73 = (unsigned short)55237;
int var_74 = 1112952699;
long long int var_75 = -120906437477639629LL;
signed char arr_0 [10] [10] ;
int arr_1 [10] [10] ;
_Bool arr_3 [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
unsigned short arr_6 [10] [10] [10] [10] ;
unsigned char arr_8 [10] [10] [10] [10] ;
unsigned char arr_9 [10] [10] [10] [10] [10] [10] ;
int arr_10 [10] [10] [10] [10] ;
short arr_11 [10] [10] [10] [10] ;
signed char arr_12 [10] [10] ;
int arr_13 [10] ;
signed char arr_14 [10] [10] [10] [10] ;
int arr_15 [10] ;
_Bool arr_16 [10] [10] [10] ;
unsigned long long int arr_20 [10] [10] [10] ;
unsigned short arr_21 [10] [10] ;
unsigned short arr_22 [10] ;
long long int arr_23 [10] [10] ;
_Bool arr_28 [10] [10] [10] [10] ;
_Bool arr_29 [10] [10] [10] [10] ;
unsigned short arr_32 [10] [10] [10] ;
int arr_34 [10] [10] [10] [10] ;
long long int arr_35 [10] [10] [10] ;
_Bool arr_36 [10] [10] [10] [10] [10] ;
unsigned char arr_37 [10] [10] [10] [10] [10] ;
short arr_39 [10] [10] ;
long long int arr_41 [10] [10] [10] [10] ;
signed char arr_43 [10] [10] [10] ;
unsigned short arr_45 [19] [19] ;
signed char arr_46 [19] ;
signed char arr_53 [19] [19] [19] [19] ;
int arr_56 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_59 [19] [19] [19] ;
long long int arr_61 [24] ;
unsigned short arr_62 [24] [24] ;
long long int arr_63 [24] ;
unsigned short arr_68 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1563877916;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)24426;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44877;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 231094973;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-303;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1997811659;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -1448774868;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 865775352978104492ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)33375;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned short)21073;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = -9062467660018182189LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)40060;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 773104267;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = -6601809471439564225LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)71 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26925 : (short)-17933;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = -2427691747361543046LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16542 : (unsigned short)23033;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_46 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-42 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 915634085;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_61 [i_0] = -3579356042244859740LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_62 [i_0] [i_1] = (unsigned short)3383;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_63 [i_0] = 2082474065242750400LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34639;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
