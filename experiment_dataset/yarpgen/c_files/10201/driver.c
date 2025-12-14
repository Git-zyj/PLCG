#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6274919496644460957LL;
signed char var_1 = (signed char)-116;
long long int var_2 = -4803122982611466071LL;
long long int var_3 = -4332294806055804622LL;
unsigned long long int var_4 = 12367019942837500175ULL;
unsigned long long int var_5 = 4891016217892093414ULL;
signed char var_6 = (signed char)-87;
signed char var_7 = (signed char)-89;
unsigned long long int var_8 = 8976050847140921156ULL;
short var_9 = (short)-2770;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)113;
unsigned int var_13 = 981564802U;
unsigned char var_14 = (unsigned char)24;
unsigned short var_15 = (unsigned short)29562;
unsigned long long int var_16 = 13867134015917817296ULL;
long long int var_17 = -4256452118049602806LL;
int zero = 0;
unsigned long long int var_18 = 15228053396563821798ULL;
long long int var_19 = 8036434612153033815LL;
signed char var_20 = (signed char)-118;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)129;
unsigned int var_23 = 373188022U;
unsigned long long int var_24 = 13512295757852725167ULL;
unsigned long long int var_25 = 2675375073150668856ULL;
long long int var_26 = -7201583686945408948LL;
unsigned long long int var_27 = 14197957066103152055ULL;
unsigned long long int var_28 = 2749098934666204141ULL;
_Bool var_29 = (_Bool)0;
signed char var_30 = (signed char)48;
short var_31 = (short)21838;
_Bool var_32 = (_Bool)0;
int var_33 = 2022162508;
short var_34 = (short)1907;
unsigned int var_35 = 1492008750U;
long long int var_36 = -6369298588682701274LL;
int var_37 = -300774875;
_Bool var_38 = (_Bool)1;
long long int var_39 = -236443511565951488LL;
unsigned char var_40 = (unsigned char)211;
signed char var_41 = (signed char)-97;
unsigned long long int var_42 = 9768144677029853442ULL;
unsigned int var_43 = 3687461137U;
unsigned char var_44 = (unsigned char)192;
unsigned int var_45 = 1031520793U;
unsigned short var_46 = (unsigned short)49108;
long long int var_47 = -3227977118668074562LL;
unsigned long long int var_48 = 11055981926937598356ULL;
_Bool var_49 = (_Bool)0;
int var_50 = -1798887080;
unsigned long long int var_51 = 6278774570724688532ULL;
signed char var_52 = (signed char)10;
short var_53 = (short)-5557;
unsigned long long int var_54 = 5654404091854293068ULL;
_Bool var_55 = (_Bool)1;
unsigned char var_56 = (unsigned char)56;
unsigned int var_57 = 45637372U;
unsigned long long int var_58 = 6324913086874111878ULL;
signed char var_59 = (signed char)(-127 - 1);
unsigned long long int var_60 = 1191091138581779817ULL;
unsigned char var_61 = (unsigned char)71;
int var_62 = 1203718765;
long long int var_63 = 6138302781135393211LL;
unsigned int var_64 = 604134544U;
long long int var_65 = -1742204264231903160LL;
signed char var_66 = (signed char)-102;
unsigned char var_67 = (unsigned char)187;
unsigned long long int var_68 = 14543342178030944117ULL;
long long int var_69 = 4318839666716902809LL;
unsigned char var_70 = (unsigned char)160;
unsigned char var_71 = (unsigned char)87;
_Bool var_72 = (_Bool)1;
unsigned int var_73 = 1437575516U;
signed char var_74 = (signed char)32;
int var_75 = -1916261702;
long long int var_76 = 1794441835815476675LL;
long long int var_77 = 6494878860770866131LL;
unsigned char var_78 = (unsigned char)98;
unsigned int var_79 = 970955195U;
unsigned long long int var_80 = 15908323353992037527ULL;
unsigned short var_81 = (unsigned short)45628;
int var_82 = -1199919987;
_Bool var_83 = (_Bool)1;
int var_84 = -2112209734;
long long int var_85 = 4313000089168281619LL;
unsigned long long int var_86 = 7460777324723129660ULL;
short var_87 = (short)3035;
unsigned char var_88 = (unsigned char)47;
_Bool arr_0 [20] [20] ;
unsigned long long int arr_2 [20] ;
unsigned short arr_3 [20] [20] [20] ;
unsigned char arr_4 [20] ;
long long int arr_6 [20] [20] [20] ;
unsigned char arr_7 [20] ;
long long int arr_9 [20] [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] ;
_Bool arr_14 [20] [20] [20] ;
long long int arr_15 [20] [20] [20] [20] ;
unsigned long long int arr_16 [20] [20] [20] [20] ;
long long int arr_17 [20] ;
signed char arr_22 [20] [20] [20] ;
unsigned long long int arr_23 [20] ;
long long int arr_27 [20] [20] [20] ;
long long int arr_28 [20] [20] [20] [20] [20] [20] ;
_Bool arr_35 [20] ;
unsigned long long int arr_38 [20] [20] [20] ;
long long int arr_41 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_44 [20] [20] [20] [20] [20] ;
short arr_45 [20] ;
long long int arr_46 [20] [20] [20] [20] [20] ;
_Bool arr_48 [20] [20] [20] [20] [20] ;
short arr_49 [20] [20] [20] [20] [20] ;
unsigned short arr_51 [20] [20] [20] [20] [20] [20] ;
long long int arr_56 [20] [20] ;
long long int arr_59 [20] [20] [20] [20] [20] ;
_Bool arr_67 [20] [20] [20] [20] [20] [20] [20] ;
long long int arr_69 [20] [20] [20] [20] [20] ;
signed char arr_73 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7577313247604039671ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)51585 : (unsigned short)27225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 834934695984105648LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -5421041462590284752LL : -4742914047771675647LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = 8938639028081798300ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -8434646218692662648LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2189895326238465458ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -1640314327519521215LL : 5420926156276189880LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 7348884918844347936ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -6052543187512335757LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1561536322749431114LL : -5835741121806888822LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 3677380718150158866ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 441818240094184122LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 5679206663689216626ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_45 [i_0] = (short)5178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = -7800456033233314448LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)5586;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)42045;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_56 [i_0] [i_1] = -1006797307676065206LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 3158773016482600869LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = 3931276068836959707LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (signed char)121;
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
    hash(&seed, var_88);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
