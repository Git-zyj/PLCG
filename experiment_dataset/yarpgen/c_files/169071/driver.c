#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1622791666;
short var_2 = (short)10740;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-109;
long long int var_7 = -1643368628223765518LL;
unsigned int var_8 = 88239275U;
unsigned char var_9 = (unsigned char)168;
signed char var_10 = (signed char)-109;
unsigned char var_11 = (unsigned char)44;
unsigned char var_12 = (unsigned char)32;
unsigned long long int var_15 = 14183936502424149650ULL;
signed char var_16 = (signed char)48;
unsigned short var_17 = (unsigned short)62138;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)56;
short var_20 = (short)-22209;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8620793668346746669LL;
unsigned char var_23 = (unsigned char)151;
unsigned char var_24 = (unsigned char)99;
unsigned int var_25 = 2191117084U;
unsigned int var_26 = 3101233183U;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-22059;
unsigned long long int var_29 = 2231137196342912024ULL;
unsigned int var_30 = 1648870114U;
unsigned short var_31 = (unsigned short)19361;
short var_32 = (short)-18948;
long long int var_33 = -1770520706309296874LL;
unsigned int var_34 = 3666559902U;
signed char var_35 = (signed char)58;
unsigned long long int var_36 = 8138714484169668642ULL;
unsigned long long int var_37 = 2440300009092419713ULL;
signed char var_38 = (signed char)45;
long long int var_39 = 8627622742837225670LL;
unsigned long long int var_40 = 11782057608917723562ULL;
unsigned int var_41 = 597168582U;
unsigned short var_42 = (unsigned short)29052;
signed char var_43 = (signed char)-26;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 1602430692175825137ULL;
long long int var_46 = -5452112691031270668LL;
signed char var_47 = (signed char)42;
unsigned char var_48 = (unsigned char)60;
unsigned int var_49 = 562542698U;
unsigned long long int var_50 = 6179226907261877627ULL;
unsigned short var_51 = (unsigned short)33982;
_Bool var_52 = (_Bool)1;
unsigned long long int var_53 = 3039964851726220748ULL;
int var_54 = -1928758361;
short var_55 = (short)27484;
unsigned long long int var_56 = 13818580351331573515ULL;
unsigned long long int var_57 = 17509725209936841384ULL;
unsigned int var_58 = 3381768984U;
long long int var_59 = 1017137350198914828LL;
signed char var_60 = (signed char)80;
signed char var_61 = (signed char)34;
unsigned short var_62 = (unsigned short)45662;
signed char var_63 = (signed char)89;
signed char arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
signed char arr_2 [17] ;
unsigned short arr_4 [17] [17] [17] ;
long long int arr_6 [17] [17] [17] [17] ;
signed char arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] ;
unsigned short arr_10 [17] [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] ;
short arr_12 [20] ;
unsigned int arr_13 [20] ;
int arr_15 [20] [20] ;
int arr_16 [20] ;
unsigned char arr_17 [20] [20] [20] ;
unsigned long long int arr_18 [20] [20] ;
unsigned int arr_22 [20] [20] [20] [20] [20] ;
unsigned long long int arr_23 [20] [20] [20] ;
unsigned int arr_24 [20] [20] ;
unsigned int arr_25 [20] [20] [20] [20] ;
unsigned long long int arr_26 [20] [20] ;
signed char arr_28 [20] [20] [20] [20] ;
unsigned short arr_30 [20] [20] [20] [20] [20] [20] ;
int arr_32 [20] [20] [20] [20] [20] ;
signed char arr_39 [20] [20] ;
long long int arr_40 [20] [20] [20] [20] ;
unsigned int arr_41 [20] [20] ;
signed char arr_43 [20] [20] [20] [20] ;
unsigned short arr_46 [20] [20] [20] [20] ;
unsigned char arr_56 [11] ;
unsigned short arr_66 [12] ;
short arr_67 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)48997;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)32341;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2590185340816453143LL : -957501467523644978LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11114824603043117575ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)6087;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 12497405014169583668ULL : 11113903885938833738ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)18776;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 1186455611U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 828105475;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -517177957;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 18211900370191597016ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 4001476209U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 6690987586109513677ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = 1337009533U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 279079089U : 2745983783U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? 16199734221752409961ULL : 14703818604124450536ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)22 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)34516 : (unsigned short)35258;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1803388142 : 260191125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_39 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = -1279411695540924076LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_41 [i_0] [i_1] = 1886301598U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_56 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_66 [i_0] = (unsigned short)63865;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_67 [i_0] = (short)-32578;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
