#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
long long int var_1 = 8867977645507097183LL;
unsigned char var_2 = (unsigned char)175;
unsigned int var_3 = 4103627845U;
unsigned char var_4 = (unsigned char)126;
unsigned char var_5 = (unsigned char)210;
unsigned int var_7 = 3541040175U;
unsigned int var_9 = 941401391U;
unsigned long long int var_10 = 18324156374090131222ULL;
unsigned int var_11 = 1072735833U;
unsigned int var_12 = 285973425U;
unsigned short var_13 = (unsigned short)56078;
unsigned int var_14 = 3114487048U;
unsigned int var_15 = 2441671000U;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
long long int var_17 = 8162939557104706850LL;
unsigned int var_18 = 1370368231U;
unsigned char var_19 = (unsigned char)206;
unsigned char var_20 = (unsigned char)93;
unsigned char var_21 = (unsigned char)28;
unsigned char var_22 = (unsigned char)63;
unsigned int var_23 = 206772507U;
unsigned char var_24 = (unsigned char)169;
unsigned char var_25 = (unsigned char)178;
unsigned char var_26 = (unsigned char)128;
unsigned char var_27 = (unsigned char)0;
unsigned char var_28 = (unsigned char)137;
unsigned char var_29 = (unsigned char)206;
unsigned char var_30 = (unsigned char)61;
unsigned short var_31 = (unsigned short)28320;
unsigned char var_32 = (unsigned char)158;
unsigned char var_33 = (unsigned char)146;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)230;
unsigned char var_36 = (unsigned char)27;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)218;
unsigned char var_39 = (unsigned char)139;
long long int var_40 = -9062736680752975854LL;
unsigned char var_41 = (unsigned char)14;
unsigned char var_42 = (unsigned char)33;
unsigned char var_43 = (unsigned char)133;
unsigned char var_44 = (unsigned char)23;
unsigned long long int var_45 = 11294383721451461477ULL;
unsigned long long int var_46 = 9351280521710500161ULL;
unsigned char var_47 = (unsigned char)165;
unsigned int var_48 = 1333913505U;
unsigned char var_49 = (unsigned char)151;
long long int var_50 = 6882209394438826606LL;
unsigned int var_51 = 2360873242U;
unsigned long long int var_52 = 4229645511768249363ULL;
unsigned int var_53 = 2426682920U;
_Bool var_54 = (_Bool)1;
long long int var_55 = 4794678052113783251LL;
unsigned int var_56 = 2460567010U;
unsigned char var_57 = (unsigned char)94;
long long int var_58 = 1771277703425036868LL;
unsigned char var_59 = (unsigned char)207;
long long int var_60 = 4701533364364715953LL;
unsigned long long int var_61 = 15038404807009761063ULL;
unsigned char var_62 = (unsigned char)80;
unsigned char var_63 = (unsigned char)80;
unsigned char var_64 = (unsigned char)48;
unsigned char var_65 = (unsigned char)97;
unsigned char var_66 = (unsigned char)129;
unsigned int var_67 = 1250186934U;
unsigned char var_68 = (unsigned char)78;
unsigned char var_69 = (unsigned char)152;
unsigned char var_70 = (unsigned char)120;
unsigned char var_71 = (unsigned char)94;
unsigned char var_72 = (unsigned char)33;
unsigned char var_73 = (unsigned char)92;
unsigned char var_74 = (unsigned char)34;
unsigned char var_75 = (unsigned char)28;
unsigned char var_76 = (unsigned char)37;
long long int var_77 = -6194693515963694750LL;
unsigned int var_78 = 4215985571U;
unsigned int var_79 = 1608650454U;
unsigned long long int var_80 = 4642331324296870537ULL;
unsigned long long int var_81 = 18294703929846905661ULL;
unsigned char var_82 = (unsigned char)234;
unsigned char var_83 = (unsigned char)94;
long long int var_84 = 5540373234218787820LL;
unsigned char var_85 = (unsigned char)139;
unsigned char var_86 = (unsigned char)23;
_Bool var_87 = (_Bool)0;
unsigned int var_88 = 279097108U;
unsigned char var_89 = (unsigned char)37;
unsigned char arr_1 [25] ;
unsigned char arr_3 [24] [24] ;
_Bool arr_4 [24] [24] ;
unsigned char arr_5 [24] ;
unsigned char arr_6 [15] ;
unsigned char arr_7 [15] [15] ;
unsigned char arr_10 [15] [15] [15] ;
unsigned int arr_12 [15] [15] [15] ;
unsigned long long int arr_13 [15] [15] [15] [15] ;
_Bool arr_14 [15] [15] [15] [15] ;
unsigned char arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_17 [15] ;
unsigned char arr_18 [15] [15] [15] ;
unsigned char arr_21 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_22 [15] [15] ;
unsigned long long int arr_23 [15] [15] [15] [15] [15] ;
unsigned char arr_26 [15] [15] [15] ;
unsigned char arr_27 [15] [15] [15] [15] ;
unsigned long long int arr_31 [15] [15] [15] [15] [15] ;
unsigned long long int arr_42 [15] [15] [15] ;
unsigned char arr_47 [15] [15] [15] ;
unsigned char arr_58 [15] [15] [15] ;
unsigned char arr_62 [15] [15] [15] [15] [15] ;
unsigned char arr_74 [15] [15] [15] [15] [15] ;
unsigned long long int arr_75 [15] [15] [15] [15] [15] [15] ;
long long int arr_87 [11] [11] [11] [11] ;
unsigned char arr_91 [11] [11] [11] [11] ;
long long int arr_100 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)224 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3525926922U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14075571693686916305ULL : 7845005046531094511ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)30 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)15233;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3366879438105404865ULL : 6620414220054070662ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)22 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 9946049558521739689ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11003342140694119105ULL : 9750503375470655964ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_75 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8307202568034294765ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_87 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5823603492174763320LL : -979970842533799938LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)34 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_100 [i_0] [i_1] [i_2] = -4287635847856510860LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
