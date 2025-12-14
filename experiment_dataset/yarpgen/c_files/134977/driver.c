#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2034414461U;
unsigned long long int var_1 = 9099636065157539364ULL;
unsigned short var_2 = (unsigned short)11916;
long long int var_3 = -6368881379441511333LL;
unsigned long long int var_4 = 16667226280862904810ULL;
signed char var_6 = (signed char)-76;
int var_7 = 1706600342;
unsigned short var_8 = (unsigned short)29134;
long long int var_9 = 1859333313555812796LL;
_Bool var_10 = (_Bool)0;
int var_11 = -397748531;
int var_12 = -1570214274;
unsigned short var_13 = (unsigned short)52136;
short var_14 = (short)20695;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 984194848U;
unsigned short var_17 = (unsigned short)26197;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)23294;
short var_20 = (short)18179;
long long int var_21 = 1685177935290115457LL;
unsigned long long int var_22 = 9086401970533289973ULL;
short var_23 = (short)14581;
int var_24 = -1692008216;
unsigned int var_25 = 3460218310U;
unsigned int var_26 = 1020933596U;
unsigned int var_27 = 1692132410U;
long long int var_28 = -4558656999122999239LL;
unsigned int var_29 = 3767682941U;
unsigned int var_30 = 3955990836U;
short var_31 = (short)7678;
long long int var_32 = -321202831121543728LL;
short var_33 = (short)-12473;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)16780;
unsigned long long int var_36 = 7617102045761301180ULL;
unsigned long long int var_37 = 10428555776805150158ULL;
short var_38 = (short)-2699;
unsigned long long int var_39 = 13920375178394437760ULL;
_Bool var_40 = (_Bool)0;
unsigned long long int var_41 = 3720682650920933666ULL;
unsigned long long int var_42 = 3157869826256417104ULL;
long long int var_43 = 1740840000596969743LL;
unsigned long long int var_44 = 10064194210882735067ULL;
unsigned short var_45 = (unsigned short)26740;
int var_46 = 334921451;
unsigned long long int var_47 = 13056936409543809927ULL;
signed char var_48 = (signed char)-117;
unsigned short var_49 = (unsigned short)2427;
unsigned short var_50 = (unsigned short)55619;
long long int var_51 = -2736466505863418237LL;
unsigned int var_52 = 1357169244U;
signed char var_53 = (signed char)64;
unsigned long long int var_54 = 3828863324446426892ULL;
_Bool var_55 = (_Bool)0;
long long int var_56 = -9065292705962698254LL;
int var_57 = -1178916501;
signed char var_58 = (signed char)-87;
signed char var_59 = (signed char)-11;
short var_60 = (short)30551;
signed char var_61 = (signed char)-65;
short var_62 = (short)-13849;
_Bool var_63 = (_Bool)1;
unsigned int var_64 = 3630222257U;
unsigned int var_65 = 584125819U;
signed char arr_0 [11] ;
unsigned long long int arr_2 [11] ;
_Bool arr_4 [11] [11] ;
unsigned int arr_5 [11] [11] [11] [11] ;
short arr_7 [11] [11] ;
unsigned long long int arr_8 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_9 [11] [11] ;
unsigned short arr_10 [11] [11] [11] [11] [11] ;
_Bool arr_12 [11] [11] [11] [11] [11] [11] ;
short arr_13 [11] [11] [11] ;
unsigned long long int arr_14 [11] [11] [11] [11] [11] ;
_Bool arr_15 [11] [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_18 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_19 [11] [11] ;
unsigned char arr_20 [11] [11] [11] [11] ;
unsigned char arr_22 [11] [11] [11] [11] ;
signed char arr_24 [11] [11] [11] [11] [11] [11] ;
long long int arr_25 [11] [11] [11] ;
unsigned long long int arr_27 [11] [11] [11] ;
short arr_30 [11] [11] [11] ;
unsigned long long int arr_33 [11] [11] [11] [11] ;
int arr_36 [21] ;
unsigned int arr_37 [21] ;
short arr_41 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 7930357294861442119ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1635803945U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-19621;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7288278355856535975ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 1294959880U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)56960;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-13518;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 16554572651914090185ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 16047606746125690627ULL : 16919525963774820364ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (unsigned short)28006 : (unsigned short)52095;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)21976;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2742250116219990071LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15862360221919219772ULL : 7842530342520944048ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-26187 : (short)-24930;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6954612173180489884ULL : 2528593918374855717ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_36 [i_0] = 748792664;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = 902756414U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16170 : (short)-8358;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
