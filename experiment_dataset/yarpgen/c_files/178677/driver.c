#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4185806649U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)64445;
short var_4 = (short)-12920;
unsigned char var_5 = (unsigned char)86;
unsigned char var_6 = (unsigned char)3;
signed char var_7 = (signed char)-30;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)180;
unsigned char var_10 = (unsigned char)149;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)8724;
short var_14 = (short)-6442;
int zero = 0;
unsigned long long int var_15 = 6910507858992889857ULL;
unsigned int var_16 = 3990864960U;
unsigned char var_17 = (unsigned char)119;
short var_18 = (short)-14203;
unsigned char var_19 = (unsigned char)184;
signed char var_20 = (signed char)-62;
signed char var_21 = (signed char)-113;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 393163210U;
unsigned long long int var_24 = 12794678639149583631ULL;
short var_25 = (short)28176;
unsigned int var_26 = 2258745066U;
unsigned short var_27 = (unsigned short)12460;
unsigned char var_28 = (unsigned char)228;
unsigned int var_29 = 484328923U;
short var_30 = (short)-6600;
short var_31 = (short)-25189;
short var_32 = (short)13160;
signed char var_33 = (signed char)30;
unsigned short var_34 = (unsigned short)40060;
short var_35 = (short)2447;
unsigned short var_36 = (unsigned short)44895;
unsigned char var_37 = (unsigned char)195;
unsigned char var_38 = (unsigned char)171;
_Bool var_39 = (_Bool)0;
short var_40 = (short)21142;
unsigned short var_41 = (unsigned short)56269;
unsigned char var_42 = (unsigned char)237;
unsigned char var_43 = (unsigned char)113;
unsigned char var_44 = (unsigned char)226;
unsigned long long int var_45 = 1856861660667555657ULL;
_Bool var_46 = (_Bool)1;
unsigned char var_47 = (unsigned char)210;
unsigned char var_48 = (unsigned char)97;
long long int var_49 = 2524130229841036454LL;
long long int var_50 = -7473933032277041214LL;
unsigned int var_51 = 566418973U;
unsigned int var_52 = 1837806672U;
short var_53 = (short)-27515;
signed char var_54 = (signed char)1;
unsigned short var_55 = (unsigned short)33521;
short var_56 = (short)12045;
unsigned int var_57 = 1292169348U;
short var_58 = (short)-1410;
unsigned char var_59 = (unsigned char)154;
unsigned int var_60 = 3022267138U;
_Bool var_61 = (_Bool)1;
_Bool var_62 = (_Bool)1;
signed char var_63 = (signed char)44;
long long int var_64 = -4368056288572810593LL;
unsigned char var_65 = (unsigned char)65;
int var_66 = -1669957795;
unsigned char var_67 = (unsigned char)39;
unsigned char var_68 = (unsigned char)63;
unsigned int var_69 = 828907399U;
unsigned long long int var_70 = 16892469657374337973ULL;
unsigned char var_71 = (unsigned char)197;
int var_72 = -839284511;
unsigned char var_73 = (unsigned char)75;
signed char var_74 = (signed char)42;
signed char var_75 = (signed char)94;
signed char var_76 = (signed char)-89;
_Bool var_77 = (_Bool)0;
unsigned long long int var_78 = 18115776740313746049ULL;
signed char var_79 = (signed char)-120;
unsigned long long int var_80 = 11254826538910175386ULL;
unsigned char var_81 = (unsigned char)86;
int var_82 = 1950905774;
unsigned int var_83 = 117439456U;
unsigned short var_84 = (unsigned short)1231;
_Bool var_85 = (_Bool)1;
unsigned long long int var_86 = 155489781632532335ULL;
long long int var_87 = -509584660691047815LL;
short var_88 = (short)10770;
_Bool var_89 = (_Bool)0;
short arr_0 [17] ;
short arr_1 [17] [17] ;
short arr_2 [17] ;
int arr_3 [22] ;
signed char arr_4 [22] ;
unsigned char arr_6 [22] ;
unsigned short arr_7 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
short arr_9 [22] [22] ;
unsigned char arr_10 [22] [22] [22] ;
unsigned char arr_11 [22] [22] ;
unsigned int arr_13 [17] ;
unsigned char arr_14 [17] ;
short arr_15 [17] ;
short arr_16 [17] [17] ;
unsigned short arr_18 [17] [17] [17] [17] ;
int arr_19 [17] [17] ;
unsigned int arr_22 [17] [17] [17] [17] ;
unsigned short arr_24 [17] [17] [17] [17] ;
_Bool arr_27 [17] [17] [17] [17] ;
_Bool arr_28 [17] [17] [17] [17] [17] ;
_Bool arr_29 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_30 [17] [17] [17] [17] [17] [17] [17] ;
unsigned char arr_33 [17] [17] [17] [17] ;
unsigned short arr_37 [17] [17] [17] [17] ;
_Bool arr_41 [17] [17] [17] [17] [17] ;
unsigned char arr_42 [17] ;
unsigned long long int arr_43 [17] [17] [17] [17] [17] ;
unsigned int arr_47 [17] [17] [17] ;
int arr_49 [17] ;
short arr_50 [17] [17] ;
unsigned short arr_52 [17] [17] [17] [17] [17] ;
_Bool arr_53 [17] [17] [17] [17] [17] [17] ;
unsigned char arr_56 [17] [17] [17] ;
unsigned char arr_60 [17] [17] [17] [17] [17] ;
int arr_67 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-16379;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11368;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)12174;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 242237094;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)19859;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)18815;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)126 : (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 248049015U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)-3896;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-5321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)16205 : (unsigned short)40098;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = -82168050;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 1876423322U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12671;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1634919095482847302ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)206 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64731;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (unsigned char)39 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = 1897871909071639135ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 3545278227U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? -95585264 : 1101630666;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22877 : (short)19883;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)65143 : (unsigned short)50408;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)130 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = -131387980;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
