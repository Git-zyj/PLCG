#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
int var_1 = -1950616709;
signed char var_5 = (signed char)104;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2745677545356399190LL;
signed char var_8 = (signed char)79;
long long int var_10 = 1920741349058977548LL;
unsigned int var_11 = 9966167U;
int var_12 = 1527538868;
long long int var_14 = -1295785607445290377LL;
long long int var_15 = 7472693347742068959LL;
int var_16 = 268390833;
_Bool var_17 = (_Bool)1;
short var_18 = (short)3346;
short var_19 = (short)-20715;
int zero = 0;
int var_20 = -125500233;
signed char var_21 = (signed char)-24;
unsigned char var_22 = (unsigned char)156;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-63;
int var_25 = -821325977;
short var_26 = (short)18154;
long long int var_27 = -1899192785881382197LL;
signed char var_28 = (signed char)-31;
long long int var_29 = -870176736777088665LL;
signed char var_30 = (signed char)-50;
int var_31 = 860448611;
long long int var_32 = 6118033939464118098LL;
long long int var_33 = 4149691375865066183LL;
signed char var_34 = (signed char)78;
short var_35 = (short)20412;
signed char var_36 = (signed char)-78;
short var_37 = (short)8470;
long long int var_38 = 6685871990270611667LL;
unsigned char var_39 = (unsigned char)148;
_Bool var_40 = (_Bool)0;
short var_41 = (short)12588;
int var_42 = -2052042114;
_Bool var_43 = (_Bool)0;
unsigned char var_44 = (unsigned char)131;
signed char var_45 = (signed char)-65;
signed char var_46 = (signed char)111;
short var_47 = (short)28563;
unsigned char var_48 = (unsigned char)125;
short var_49 = (short)-2429;
short var_50 = (short)-20061;
unsigned int var_51 = 1907663145U;
long long int var_52 = 978126513119764981LL;
unsigned short var_53 = (unsigned short)165;
unsigned char var_54 = (unsigned char)66;
unsigned short var_55 = (unsigned short)34623;
_Bool var_56 = (_Bool)1;
long long int var_57 = 1586124220660200503LL;
unsigned short var_58 = (unsigned short)54959;
_Bool var_59 = (_Bool)1;
unsigned char var_60 = (unsigned char)41;
_Bool var_61 = (_Bool)1;
long long int var_62 = 1538987785170832655LL;
_Bool arr_0 [21] ;
signed char arr_1 [21] [21] ;
signed char arr_2 [21] ;
long long int arr_3 [21] ;
int arr_4 [21] [21] [21] ;
long long int arr_5 [21] ;
signed char arr_6 [21] [21] [21] ;
long long int arr_7 [21] [21] [21] [21] ;
short arr_8 [19] [19] ;
int arr_9 [19] [19] ;
long long int arr_10 [19] ;
short arr_11 [19] ;
unsigned long long int arr_14 [15] ;
short arr_15 [15] [15] ;
unsigned char arr_16 [15] [15] [15] ;
long long int arr_17 [15] [15] ;
short arr_18 [15] [15] [15] ;
signed char arr_20 [15] [15] [15] [15] ;
int arr_21 [15] [15] [15] [15] ;
unsigned char arr_23 [15] [15] [15] [15] [15] ;
signed char arr_29 [15] [15] [15] [15] ;
long long int arr_30 [15] [15] [15] ;
_Bool arr_32 [15] [15] [15] [15] ;
int arr_33 [15] ;
short arr_34 [15] [15] [15] [15] [15] [15] ;
short arr_35 [15] [15] ;
_Bool arr_37 [15] [15] [15] [15] [15] ;
int arr_38 [15] [15] [15] [15] [15] [15] [15] ;
unsigned short arr_44 [15] [15] ;
short arr_49 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -8041637009604279678LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1985092279;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 958943194717163201LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)60 : (signed char)-56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 479570101429175196LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (short)4878;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -1302156631;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 3510248706178455460LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)-26895;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 14724286776579567878ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-5882;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 6047916976617335123LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)20183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1402934339;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-15 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = -6383200301994753251LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = -812091081;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)-25071 : (short)-27240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15755 : (short)14979;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -1607481629 : -25991695;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56013 : (unsigned short)9496;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_49 [i_0] = (short)8749;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
