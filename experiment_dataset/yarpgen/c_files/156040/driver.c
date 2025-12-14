#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14051818274033479241ULL;
unsigned int var_1 = 4093023223U;
long long int var_2 = 6344361843221808980LL;
short var_3 = (short)-24615;
unsigned long long int var_4 = 16684582520595940994ULL;
unsigned long long int var_6 = 2237263044169665895ULL;
short var_7 = (short)24359;
short var_8 = (short)12781;
int var_9 = 1508125363;
unsigned int var_10 = 1869952199U;
long long int var_11 = -7588280381525795750LL;
int var_12 = -197764029;
int var_13 = 1274927243;
short var_14 = (short)16876;
int var_15 = -1524911759;
short var_16 = (short)11652;
int var_17 = -20231754;
int zero = 0;
unsigned long long int var_19 = 1381322544846975648ULL;
unsigned long long int var_20 = 12582499796859731513ULL;
unsigned int var_21 = 562154097U;
unsigned char var_22 = (unsigned char)86;
short var_23 = (short)-26603;
short var_24 = (short)-9405;
unsigned int var_25 = 3492992693U;
long long int var_26 = -8733139462660476732LL;
unsigned int var_27 = 2696748055U;
short var_28 = (short)-10979;
unsigned short var_29 = (unsigned short)7228;
unsigned char var_30 = (unsigned char)219;
int var_31 = 408989524;
unsigned int var_32 = 3481254855U;
unsigned int var_33 = 1994573055U;
int var_34 = -1345129326;
long long int var_35 = -3509742336376512853LL;
int var_36 = -1712661233;
unsigned char var_37 = (unsigned char)165;
unsigned long long int var_38 = 14063720031307165120ULL;
int var_39 = 1308178929;
unsigned char var_40 = (unsigned char)218;
long long int var_41 = 8845405385268725476LL;
unsigned long long int var_42 = 7738353358549813471ULL;
short var_43 = (short)-9144;
short var_44 = (short)-14244;
short var_45 = (short)12828;
int var_46 = -1066716877;
signed char var_47 = (signed char)-108;
unsigned short var_48 = (unsigned short)10377;
int var_49 = 1219830933;
signed char var_50 = (signed char)-116;
unsigned long long int var_51 = 9481004707196784171ULL;
short var_52 = (short)12860;
short var_53 = (short)20304;
unsigned int var_54 = 757316565U;
short var_55 = (short)16776;
unsigned int var_56 = 848056553U;
short var_57 = (short)-22632;
long long int var_58 = -4691860681204759905LL;
unsigned int var_59 = 789789108U;
unsigned char var_60 = (unsigned char)172;
unsigned int arr_0 [11] ;
unsigned int arr_3 [23] ;
unsigned int arr_7 [13] ;
unsigned int arr_8 [24] ;
signed char arr_9 [24] [24] ;
unsigned short arr_12 [24] [24] ;
unsigned char arr_13 [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] ;
short arr_15 [24] [24] [24] [24] ;
short arr_16 [24] [24] [24] [24] ;
unsigned int arr_17 [24] [24] [24] [24] ;
short arr_18 [24] ;
unsigned int arr_19 [24] [24] [24] [24] [24] ;
short arr_22 [24] [24] [24] [24] [24] ;
long long int arr_23 [24] [24] [24] [24] ;
short arr_25 [24] [24] [24] [24] ;
long long int arr_29 [24] [24] [24] ;
unsigned long long int arr_42 [10] [10] [10] [10] [10] [10] ;
short arr_55 [19] ;
unsigned long long int arr_57 [19] ;
int arr_62 [19] [19] [19] [19] ;
signed char arr_2 [11] ;
long long int arr_5 [23] ;
unsigned short arr_24 [24] [24] [24] [24] [24] ;
signed char arr_27 [24] [24] [24] [24] ;
int arr_39 [10] [10] [10] ;
unsigned int arr_66 [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4150075208U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3137138277U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 2602157263U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 436877556U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)7662;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 17932032422469551722ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-22547 : (short)-2539;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-32212 : (short)-25462;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2638986006U : 3249749923U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)-8897;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 891726655U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)15953 : (short)5526;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 2264631583537879148LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)6676 : (short)17295;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7169929685250858207LL : -3129728877687785286LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13196232714902853776ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_55 [i_0] = (short)-1308;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_57 [i_0] = 18275195699959720009ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = 16821267;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 541745266181179434LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)20723 : (unsigned short)22172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-91 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = -1207270841;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 30674006U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
