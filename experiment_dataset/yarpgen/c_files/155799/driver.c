#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
short var_1 = (short)-31396;
unsigned char var_2 = (unsigned char)9;
short var_3 = (short)-11560;
signed char var_4 = (signed char)-49;
int var_5 = -1977853932;
signed char var_6 = (signed char)-113;
unsigned char var_7 = (unsigned char)58;
unsigned int var_8 = 3678316734U;
short var_9 = (short)-30167;
short var_10 = (short)18137;
signed char var_11 = (signed char)99;
long long int var_12 = 3572957698849078028LL;
long long int var_13 = -167580474592858610LL;
signed char var_14 = (signed char)-81;
int var_15 = 1543212910;
int zero = 0;
short var_17 = (short)-1983;
long long int var_18 = -5128333714439732050LL;
signed char var_19 = (signed char)-118;
unsigned char var_20 = (unsigned char)176;
signed char var_21 = (signed char)-16;
unsigned int var_22 = 2345539295U;
short var_23 = (short)2263;
signed char var_24 = (signed char)4;
unsigned int var_25 = 3444227690U;
short var_26 = (short)-19231;
signed char var_27 = (signed char)127;
signed char var_28 = (signed char)-52;
signed char var_29 = (signed char)-31;
signed char var_30 = (signed char)-115;
unsigned int var_31 = 978890219U;
long long int var_32 = -6925345324709507824LL;
signed char var_33 = (signed char)-52;
long long int var_34 = -2633088784197825242LL;
unsigned char var_35 = (unsigned char)28;
signed char var_36 = (signed char)68;
signed char var_37 = (signed char)111;
unsigned int var_38 = 693379582U;
signed char var_39 = (signed char)-85;
short var_40 = (short)14666;
signed char var_41 = (signed char)18;
short var_42 = (short)-12692;
unsigned int var_43 = 3235555703U;
unsigned int var_44 = 2408994892U;
short var_45 = (short)-21173;
long long int var_46 = 4754683759088362465LL;
unsigned int var_47 = 2118429915U;
long long int var_48 = -8279742342902862659LL;
short var_49 = (short)17959;
short var_50 = (short)1195;
signed char var_51 = (signed char)115;
int var_52 = -1390012722;
unsigned char var_53 = (unsigned char)165;
signed char var_54 = (signed char)45;
short var_55 = (short)-15734;
signed char var_56 = (signed char)58;
unsigned int var_57 = 3203924431U;
long long int var_58 = 3071442189319025658LL;
unsigned char var_59 = (unsigned char)127;
unsigned int var_60 = 2867428488U;
signed char var_61 = (signed char)-16;
long long int var_62 = -8094011415083571786LL;
short var_63 = (short)17524;
unsigned int var_64 = 2327470625U;
signed char var_65 = (signed char)-18;
unsigned char var_66 = (unsigned char)58;
unsigned int var_67 = 3473173387U;
long long int var_68 = 5107337088975811619LL;
short var_69 = (short)24354;
unsigned int var_70 = 3499761528U;
int var_71 = 1960434319;
long long int var_72 = -6502615802559520895LL;
signed char var_73 = (signed char)65;
unsigned char var_74 = (unsigned char)238;
unsigned int var_75 = 819421877U;
unsigned int var_76 = 1956883247U;
signed char var_77 = (signed char)106;
unsigned int var_78 = 2767574973U;
signed char var_79 = (signed char)20;
signed char var_80 = (signed char)-64;
signed char var_81 = (signed char)-48;
int var_82 = -1341644830;
unsigned char var_83 = (unsigned char)96;
long long int var_84 = 5295580479647378961LL;
signed char var_85 = (signed char)-3;
unsigned int var_86 = 2541786967U;
int var_87 = 1793464046;
signed char var_88 = (signed char)69;
unsigned int var_89 = 4264558864U;
signed char var_90 = (signed char)33;
long long int var_91 = 5556870304516798925LL;
signed char arr_1 [17] ;
short arr_2 [17] ;
short arr_3 [17] ;
short arr_6 [17] [17] ;
unsigned char arr_10 [17] ;
unsigned int arr_11 [17] [17] [17] ;
signed char arr_13 [17] [17] [17] ;
signed char arr_15 [17] [17] [17] [17] ;
int arr_20 [17] ;
int arr_21 [18] [18] ;
signed char arr_22 [18] [18] ;
signed char arr_23 [18] ;
signed char arr_24 [18] ;
short arr_26 [18] [18] [18] ;
unsigned char arr_28 [18] ;
short arr_29 [18] ;
short arr_30 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_31 [18] [18] ;
signed char arr_34 [18] [18] [18] ;
unsigned int arr_35 [18] ;
signed char arr_37 [18] [18] [18] [18] ;
signed char arr_38 [18] ;
int arr_39 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_43 [18] [18] [18] [18] ;
unsigned int arr_45 [18] [18] ;
int arr_46 [18] [18] [18] ;
signed char arr_47 [18] [18] [18] [18] ;
signed char arr_48 [18] ;
int arr_53 [18] [18] ;
signed char arr_54 [18] ;
short arr_56 [18] ;
unsigned int arr_62 [18] [18] [18] [18] [18] [18] ;
signed char arr_64 [18] [18] [18] [18] ;
short arr_66 [18] [18] [18] [18] ;
unsigned int arr_67 [18] ;
signed char arr_74 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)14686;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)5735;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25454 : (short)5508;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 685873003U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 2028534592;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 690928749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)4673;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (short)3559;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)30319;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = 2780121350U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1285719836;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_45 [i_0] [i_1] = 882764308U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 2026551897;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_48 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = 1824040704;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_54 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_56 [i_0] = (short)24971;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1148507539U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-27597 : (short)-24231;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_67 [i_0] = 3557666153U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_74 [i_0] = (signed char)-4;
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
    hash(&seed, var_90);
    hash(&seed, var_91);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
