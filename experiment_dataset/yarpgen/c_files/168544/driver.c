#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
signed char var_1 = (signed char)-41;
unsigned char var_2 = (unsigned char)121;
signed char var_3 = (signed char)-62;
signed char var_4 = (signed char)-91;
unsigned char var_5 = (unsigned char)119;
long long int var_6 = 8104893712952218897LL;
signed char var_7 = (signed char)5;
unsigned char var_8 = (unsigned char)215;
signed char var_9 = (signed char)-78;
unsigned int var_10 = 1305000046U;
int var_11 = -2118517998;
signed char var_12 = (signed char)-101;
short var_13 = (short)-19755;
int zero = 0;
signed char var_14 = (signed char)-55;
long long int var_15 = 4790799617104768585LL;
int var_16 = 1489748891;
int var_17 = -799063326;
unsigned short var_18 = (unsigned short)26192;
signed char var_19 = (signed char)122;
unsigned int var_20 = 98668072U;
long long int var_21 = 6353229879947532621LL;
short var_22 = (short)-19016;
long long int var_23 = -8989558114732259135LL;
unsigned char var_24 = (unsigned char)141;
unsigned char var_25 = (unsigned char)62;
short var_26 = (short)32477;
unsigned int var_27 = 2807833114U;
long long int var_28 = -1265883057999020255LL;
unsigned short var_29 = (unsigned short)8007;
unsigned char var_30 = (unsigned char)138;
short var_31 = (short)-17960;
short var_32 = (short)-11830;
unsigned short var_33 = (unsigned short)29870;
long long int var_34 = -534515751434243838LL;
int var_35 = -234165440;
signed char var_36 = (signed char)-78;
unsigned char var_37 = (unsigned char)218;
short var_38 = (short)-27943;
unsigned char var_39 = (unsigned char)33;
short var_40 = (short)-31628;
signed char var_41 = (signed char)14;
long long int var_42 = 7224351920529995492LL;
unsigned int var_43 = 427884114U;
short var_44 = (short)-611;
unsigned short var_45 = (unsigned short)43058;
long long int var_46 = 7174554313371933771LL;
_Bool var_47 = (_Bool)1;
unsigned long long int var_48 = 12050703075564667766ULL;
unsigned char var_49 = (unsigned char)138;
unsigned char var_50 = (unsigned char)173;
signed char var_51 = (signed char)105;
unsigned short var_52 = (unsigned short)47748;
unsigned short var_53 = (unsigned short)10333;
long long int var_54 = 1874414183159960868LL;
long long int var_55 = -8512843679351470560LL;
int var_56 = -444500697;
long long int var_57 = -2945063398617505067LL;
unsigned char var_58 = (unsigned char)224;
long long int var_59 = 8840475988913538457LL;
int var_60 = -291924302;
unsigned char var_61 = (unsigned char)190;
unsigned short var_62 = (unsigned short)915;
unsigned long long int var_63 = 10803265521452604701ULL;
unsigned char var_64 = (unsigned char)119;
_Bool var_65 = (_Bool)1;
short var_66 = (short)-24953;
signed char var_67 = (signed char)-116;
unsigned long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
long long int arr_2 [20] ;
int arr_3 [20] ;
short arr_4 [20] ;
unsigned short arr_5 [20] ;
int arr_6 [20] ;
_Bool arr_7 [20] [20] [20] [20] ;
long long int arr_8 [20] [20] [20] ;
unsigned short arr_10 [20] [20] ;
int arr_11 [20] [20] [20] [20] [20] [20] ;
signed char arr_12 [20] ;
_Bool arr_19 [18] [18] [18] [18] ;
int arr_20 [18] [18] [18] ;
int arr_21 [18] [18] [18] [18] ;
short arr_24 [19] ;
signed char arr_26 [19] ;
long long int arr_27 [19] [19] ;
short arr_28 [19] [19] [19] ;
unsigned short arr_29 [19] [19] [19] ;
signed char arr_32 [19] [19] [19] ;
_Bool arr_35 [19] [19] [19] [19] [19] ;
int arr_36 [19] [19] [19] [19] ;
_Bool arr_39 [19] ;
unsigned char arr_44 [22] ;
signed char arr_45 [22] ;
unsigned char arr_49 [22] [22] [22] [22] ;
unsigned char arr_50 [22] [22] [22] [22] ;
unsigned char arr_52 [22] [22] ;
short arr_53 [22] [22] [22] [22] [22] [22] ;
long long int arr_54 [22] [22] [22] [22] [22] ;
unsigned short arr_55 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_56 [22] [22] [22] [22] ;
long long int arr_57 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_60 [22] ;
long long int arr_61 [22] [22] ;
unsigned short arr_62 [22] [22] [22] [22] ;
unsigned char arr_64 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 13169676951067012205ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -2747135152680999106LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -8044529899129656511LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -602864729;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)6493;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)15833;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1886940917;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4693799974573774771LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)46146;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1260275906;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -698130037;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1766932723 : 438410912;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (short)12039;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = -8661119553438134371LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)-27107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)39594 : (unsigned short)11180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2074136987 : -2014058435;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_44 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_45 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)242 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_52 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-16182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = 2266336544114126106LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)20616;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)113 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? -5684448408467414078LL : 4997464559042680758LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_60 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_61 [i_0] [i_1] = -2930580717912896368LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)50922 : (unsigned short)51897;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_64 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)142 : (unsigned char)18;
}

void checksum() {
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
