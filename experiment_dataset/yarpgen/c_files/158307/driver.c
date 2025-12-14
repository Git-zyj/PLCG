#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned short var_1 = (unsigned short)1456;
long long int var_3 = -2731294782570630172LL;
unsigned short var_4 = (unsigned short)25077;
int var_5 = 441033252;
unsigned short var_6 = (unsigned short)32821;
unsigned int var_7 = 4286561302U;
short var_8 = (short)-23475;
long long int var_9 = -374308978436303594LL;
long long int var_10 = 2023345128345410671LL;
short var_11 = (short)22999;
int zero = 0;
int var_12 = 736379652;
unsigned long long int var_13 = 1130802098693361972ULL;
unsigned short var_14 = (unsigned short)36054;
long long int var_15 = 3225216222531681581LL;
unsigned int var_16 = 195413031U;
unsigned long long int var_17 = 2199949840391122621ULL;
int var_18 = -283657918;
unsigned int var_19 = 2124644893U;
unsigned long long int var_20 = 2666825983637857715ULL;
long long int var_21 = -4397185269327538512LL;
unsigned int var_22 = 2928647128U;
long long int var_23 = -6092401679123966940LL;
unsigned short var_24 = (unsigned short)45803;
long long int var_25 = 4397512607725339031LL;
unsigned short var_26 = (unsigned short)16672;
int var_27 = 384541524;
signed char var_28 = (signed char)122;
long long int var_29 = 6226345378757762351LL;
unsigned long long int var_30 = 475784684928147369ULL;
short var_31 = (short)30634;
unsigned long long int var_32 = 10585851949536586855ULL;
unsigned short var_33 = (unsigned short)1768;
unsigned short var_34 = (unsigned short)48642;
int var_35 = -1091374436;
short var_36 = (short)-17496;
long long int var_37 = -2268089868657253570LL;
long long int var_38 = 964186231160051017LL;
long long int var_39 = -5028457745549172773LL;
int var_40 = -134821091;
unsigned long long int var_41 = 15733314246819342140ULL;
unsigned short var_42 = (unsigned short)10168;
unsigned short var_43 = (unsigned short)45152;
short var_44 = (short)-17883;
short var_45 = (short)-15616;
int var_46 = -1425948480;
int var_47 = -1794249836;
unsigned short var_48 = (unsigned short)26125;
unsigned short var_49 = (unsigned short)54412;
signed char var_50 = (signed char)124;
unsigned short var_51 = (unsigned short)20703;
int var_52 = -2097735516;
int var_53 = 2117811053;
short var_54 = (short)15273;
int var_55 = 476921326;
unsigned short var_56 = (unsigned short)46927;
int var_57 = -367063935;
unsigned short var_58 = (unsigned short)56904;
unsigned int var_59 = 3377504940U;
unsigned int var_60 = 2707348011U;
int var_61 = 163398032;
signed char var_62 = (signed char)-46;
long long int var_63 = -7061963623215751509LL;
unsigned long long int var_64 = 11590731527383462905ULL;
int var_65 = -516341268;
int var_66 = 333933704;
unsigned long long int var_67 = 12050024444026121973ULL;
unsigned short var_68 = (unsigned short)18613;
short var_69 = (short)-23755;
unsigned long long int var_70 = 5990701210000658683ULL;
int var_71 = -70761831;
int var_72 = 264149671;
signed char var_73 = (signed char)-104;
unsigned short var_74 = (unsigned short)54536;
unsigned short var_75 = (unsigned short)37548;
signed char var_76 = (signed char)-119;
signed char var_77 = (signed char)33;
int var_78 = 986961450;
signed char var_79 = (signed char)-105;
unsigned long long int var_80 = 4437395392387343077ULL;
int var_81 = -2000223257;
unsigned short var_82 = (unsigned short)33867;
long long int var_83 = 4543061221300402606LL;
unsigned int var_84 = 3933479425U;
int var_85 = 899375926;
int var_86 = 124195755;
long long int arr_1 [16] ;
signed char arr_2 [16] [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned short arr_6 [16] [16] [16] [16] ;
int arr_8 [16] [16] [16] [16] ;
int arr_9 [12] [12] ;
unsigned short arr_11 [12] [12] ;
int arr_12 [12] [12] ;
int arr_15 [12] [12] [12] ;
unsigned short arr_16 [12] [12] ;
unsigned short arr_17 [12] ;
int arr_18 [12] [12] [12] [12] ;
unsigned short arr_20 [12] [12] ;
signed char arr_23 [12] [12] [12] [12] [12] ;
short arr_24 [12] [12] [12] [12] [12] ;
long long int arr_29 [12] [12] [12] ;
short arr_31 [12] ;
short arr_34 [12] [12] [12] [12] ;
int arr_43 [12] [12] [12] ;
unsigned short arr_47 [12] [12] [12] ;
unsigned short arr_48 [12] [12] [12] ;
unsigned short arr_50 [12] ;
unsigned long long int arr_51 [12] [12] [12] ;
int arr_77 [12] [12] [12] ;
unsigned long long int arr_78 [20] ;
unsigned short arr_80 [20] ;
short arr_81 [20] [20] ;
short arr_83 [20] [20] ;
signed char arr_85 [20] ;
short arr_89 [20] [20] [20] [20] ;
unsigned short arr_90 [20] [20] ;
int arr_94 [23] ;
unsigned short arr_96 [23] [23] [23] ;
unsigned short arr_97 [23] ;
unsigned short arr_99 [23] ;
short arr_100 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -613267626576808114LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4249050688761273729ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16800708785753970770ULL : 1374507759495875457ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 617645019;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -579340497;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)25009;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = -1062554444;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1378537960;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)62611;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned short)11244;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1777862407;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)13755;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-21454 : (short)-21832;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1179864023273245127LL : 6520863177564536547LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (short)4827 : (short)-25219;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-22179 : (short)-24116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -145365384 : 1271602300;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (unsigned short)35565;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (unsigned short)62678;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = (unsigned short)56777;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 6974162078980973826ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_77 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1769869713 : 67944408;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_78 [i_0] = 18179905550780180798ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_80 [i_0] = (unsigned short)52008;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_81 [i_0] [i_1] = (short)24196;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_83 [i_0] [i_1] = (short)518;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_85 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_89 [i_0] [i_1] [i_2] [i_3] = (short)-2384;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_90 [i_0] [i_1] = (unsigned short)17441;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_94 [i_0] = 961672081;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_96 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)47528 : (unsigned short)8389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_97 [i_0] = (unsigned short)1533;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_99 [i_0] = (unsigned short)24851;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_100 [i_0] = (short)-29853;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
