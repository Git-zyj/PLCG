#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50691;
unsigned short var_1 = (unsigned short)29734;
short var_2 = (short)-12862;
unsigned short var_3 = (unsigned short)5864;
signed char var_4 = (signed char)110;
long long int var_5 = -4267657068357433960LL;
unsigned char var_6 = (unsigned char)224;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2592411092U;
unsigned char var_9 = (unsigned char)182;
_Bool var_10 = (_Bool)1;
short var_11 = (short)27494;
unsigned int var_12 = 2526414750U;
_Bool var_13 = (_Bool)0;
int var_14 = 2048039947;
unsigned int var_15 = 3309875045U;
unsigned char var_16 = (unsigned char)189;
short var_18 = (short)22518;
int zero = 0;
unsigned short var_19 = (unsigned short)46137;
int var_20 = 1935247808;
signed char var_21 = (signed char)96;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)640;
short var_25 = (short)-24209;
unsigned int var_26 = 1775630868U;
long long int var_27 = -4959915468872951817LL;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)5;
unsigned char var_30 = (unsigned char)131;
_Bool var_31 = (_Bool)0;
short var_32 = (short)4875;
long long int var_33 = 4965399279344587293LL;
short var_34 = (short)-26190;
short var_35 = (short)13273;
unsigned char var_36 = (unsigned char)117;
unsigned short var_37 = (unsigned short)6384;
unsigned long long int var_38 = 1052505742510185931ULL;
signed char var_39 = (signed char)63;
int var_40 = -722169363;
unsigned short var_41 = (unsigned short)62264;
unsigned long long int var_42 = 2664687568194140857ULL;
unsigned char var_43 = (unsigned char)71;
signed char var_44 = (signed char)-50;
_Bool var_45 = (_Bool)0;
_Bool var_46 = (_Bool)1;
unsigned char var_47 = (unsigned char)54;
signed char var_48 = (signed char)66;
_Bool var_49 = (_Bool)0;
unsigned short var_50 = (unsigned short)6249;
signed char var_51 = (signed char)1;
long long int var_52 = 5834939680615498823LL;
_Bool var_53 = (_Bool)1;
unsigned long long int var_54 = 10677145450073150777ULL;
short var_55 = (short)-28153;
_Bool var_56 = (_Bool)0;
_Bool var_57 = (_Bool)0;
unsigned int var_58 = 1125926738U;
short var_59 = (short)8483;
int var_60 = -450916618;
unsigned long long int var_61 = 9294929458122889742ULL;
short var_62 = (short)24373;
int var_63 = 1192763807;
short var_64 = (short)13848;
unsigned long long int var_65 = 13547384423429468645ULL;
_Bool var_66 = (_Bool)0;
int var_67 = -54304021;
_Bool var_68 = (_Bool)0;
_Bool var_69 = (_Bool)0;
unsigned char var_70 = (unsigned char)130;
unsigned short var_71 = (unsigned short)3859;
signed char var_72 = (signed char)70;
int var_73 = 1888097599;
unsigned short var_74 = (unsigned short)23144;
short var_75 = (short)19459;
_Bool var_76 = (_Bool)0;
unsigned char arr_1 [11] ;
int arr_3 [11] ;
signed char arr_4 [11] ;
_Bool arr_5 [11] [11] ;
unsigned short arr_9 [11] [11] [11] [11] [11] [11] ;
int arr_10 [11] [11] [11] [11] ;
int arr_11 [11] [11] [11] ;
int arr_12 [11] [11] [11] [11] [11] ;
unsigned char arr_13 [11] [11] [11] ;
unsigned char arr_14 [11] [11] [11] [11] [11] ;
int arr_17 [16] ;
int arr_18 [16] ;
unsigned short arr_20 [16] [16] ;
unsigned int arr_22 [16] ;
long long int arr_23 [16] ;
unsigned short arr_24 [16] ;
short arr_27 [16] ;
signed char arr_36 [16] [16] ;
unsigned long long int arr_37 [16] ;
short arr_38 [16] [16] ;
_Bool arr_54 [19] ;
unsigned short arr_55 [22] ;
unsigned short arr_59 [22] [22] [22] ;
int arr_60 [22] [22] [22] ;
_Bool arr_61 [22] ;
signed char arr_63 [24] ;
unsigned long long int arr_64 [24] [24] ;
int arr_65 [24] [24] ;
_Bool arr_66 [24] [24] [24] ;
short arr_67 [24] [24] ;
signed char arr_68 [24] [24] ;
short arr_69 [24] [24] ;
unsigned long long int arr_70 [24] [24] [24] ;
short arr_71 [24] [24] ;
_Bool arr_72 [24] [24] [24] ;
unsigned short arr_74 [24] [24] [24] ;
short arr_75 [24] [24] [24] [24] ;
long long int arr_76 [24] [24] [24] [24] ;
short arr_77 [24] [24] [24] [24] ;
int arr_78 [24] ;
unsigned char arr_79 [24] ;
unsigned short arr_86 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 335007154;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)36857;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -191730375;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 326781913;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 4193463;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -2092849618;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -690127892;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)28362;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 1132632751U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = -2216881222524614960LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (unsigned short)15844;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (short)-11665;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = 13725779549064681455ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_38 [i_0] [i_1] = (short)26197;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_54 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_55 [i_0] = (unsigned short)58256;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (unsigned short)10791;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = -237703948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_61 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_63 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_64 [i_0] [i_1] = 17351954979210900593ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_65 [i_0] [i_1] = 1357761965;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_67 [i_0] [i_1] = (short)-9651;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_68 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_69 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17647 : (short)-4416;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4281980540300668330ULL : 14635342852496110887ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_71 [i_0] [i_1] = (short)14795;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)17463 : (unsigned short)18069;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_75 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-22116 : (short)31774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = -3857280157642687079LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (short)-3755;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_78 [i_0] = 703740139;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_79 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_86 [i_0] = (unsigned short)1206;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
