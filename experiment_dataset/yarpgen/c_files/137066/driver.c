#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17268;
signed char var_1 = (signed char)70;
int var_2 = -1060691796;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)42559;
long long int var_6 = -5510114875160472756LL;
unsigned int var_7 = 1434535757U;
unsigned short var_8 = (unsigned short)34669;
unsigned short var_9 = (unsigned short)16520;
unsigned short var_10 = (unsigned short)10587;
signed char var_11 = (signed char)118;
unsigned long long int var_12 = 11369850038725705975ULL;
unsigned int var_13 = 928926834U;
unsigned char var_14 = (unsigned char)55;
unsigned long long int var_15 = 3882767729030922451ULL;
int zero = 0;
signed char var_16 = (signed char)-27;
signed char var_17 = (signed char)120;
unsigned int var_18 = 1076344963U;
int var_19 = -1082244164;
unsigned int var_20 = 4080964958U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)98;
signed char var_23 = (signed char)19;
unsigned int var_24 = 1652895095U;
unsigned char var_25 = (unsigned char)237;
unsigned long long int var_26 = 8280282904723008238ULL;
long long int var_27 = 8298745925137134377LL;
unsigned int var_28 = 1702144311U;
unsigned short var_29 = (unsigned short)28788;
unsigned long long int var_30 = 7164498544845141345ULL;
unsigned int var_31 = 2777880295U;
unsigned int var_32 = 1753283412U;
unsigned short var_33 = (unsigned short)11059;
short var_34 = (short)21596;
signed char var_35 = (signed char)-22;
unsigned short var_36 = (unsigned short)566;
unsigned int var_37 = 1251084832U;
unsigned int var_38 = 4162685101U;
signed char var_39 = (signed char)61;
long long int var_40 = 5075422946027726809LL;
signed char var_41 = (signed char)-103;
unsigned long long int var_42 = 8719682447647593669ULL;
unsigned short var_43 = (unsigned short)37314;
int var_44 = -1081716233;
long long int var_45 = 2669420917747159676LL;
unsigned char var_46 = (unsigned char)82;
_Bool var_47 = (_Bool)1;
signed char var_48 = (signed char)-33;
unsigned long long int var_49 = 607435958777582871ULL;
signed char var_50 = (signed char)73;
unsigned char var_51 = (unsigned char)139;
unsigned short var_52 = (unsigned short)40620;
int var_53 = 226105493;
unsigned char var_54 = (unsigned char)52;
long long int var_55 = -3205273029507130263LL;
unsigned long long int var_56 = 12685408576617063271ULL;
unsigned long long int var_57 = 18418615790914505123ULL;
unsigned int var_58 = 4205452562U;
int var_59 = 1179862778;
unsigned short var_60 = (unsigned short)49541;
unsigned long long int var_61 = 7068789488477729252ULL;
unsigned short var_62 = (unsigned short)35405;
unsigned short var_63 = (unsigned short)33780;
unsigned long long int var_64 = 5701281228963965379ULL;
int var_65 = 285770918;
unsigned short var_66 = (unsigned short)29599;
short var_67 = (short)24284;
_Bool var_68 = (_Bool)0;
long long int var_69 = 3836292146466023379LL;
signed char var_70 = (signed char)21;
signed char var_71 = (signed char)72;
signed char var_72 = (signed char)122;
signed char var_73 = (signed char)-6;
unsigned long long int var_74 = 5233342492584256718ULL;
short arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned long long int arr_3 [14] ;
long long int arr_4 [14] [14] ;
int arr_5 [14] ;
unsigned long long int arr_7 [14] ;
short arr_8 [14] ;
_Bool arr_9 [14] [14] ;
_Bool arr_10 [14] [14] ;
unsigned char arr_11 [14] ;
unsigned long long int arr_24 [14] ;
signed char arr_27 [17] ;
long long int arr_29 [17] ;
signed char arr_33 [16] [16] ;
_Bool arr_35 [16] ;
unsigned int arr_36 [16] [16] [16] [16] ;
_Bool arr_38 [16] [16] [16] [16] [16] ;
_Bool arr_41 [16] [16] [16] [16] [16] ;
int arr_43 [16] [16] [16] [16] [16] ;
_Bool arr_44 [16] [16] [16] [16] ;
unsigned int arr_45 [16] [16] [16] [16] [16] ;
unsigned short arr_46 [16] [16] [16] [16] [16] [16] [16] ;
unsigned int arr_47 [16] [16] ;
short arr_50 [16] [16] [16] [16] [16] [16] ;
long long int arr_51 [16] [16] ;
signed char arr_57 [16] [16] [16] [16] [16] [16] [16] ;
unsigned char arr_58 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)11098 : (short)13066;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4111431822U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 12672053913735960488ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 8934245373229024461LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 468330965;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1310831852766111593ULL : 16110620595239961835ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)16581 : (short)28394;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = 1991934607106292472ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 1023932440734618757LL : -4765210615081573792LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_33 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3494240143U : 2774996255U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = -1949518379;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 545103557U : 1877990820U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)33778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? 104217560U : 2102749922U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)25055 : (short)-30653;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_51 [i_0] [i_1] = 8942541573961523759LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)108;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
