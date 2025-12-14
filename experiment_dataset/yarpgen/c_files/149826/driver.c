#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23190;
unsigned char var_2 = (unsigned char)93;
unsigned char var_3 = (unsigned char)89;
unsigned int var_4 = 3422711333U;
unsigned int var_5 = 1146169677U;
short var_6 = (short)-22621;
unsigned char var_7 = (unsigned char)13;
unsigned char var_8 = (unsigned char)32;
signed char var_10 = (signed char)-43;
unsigned char var_11 = (unsigned char)255;
int zero = 0;
unsigned long long int var_12 = 14245377366732578661ULL;
short var_13 = (short)-7632;
short var_14 = (short)-13075;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2335179014U;
unsigned char var_17 = (unsigned char)117;
int var_18 = -1575497142;
short var_19 = (short)-18780;
short var_20 = (short)-6705;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-15493;
_Bool var_23 = (_Bool)0;
int var_24 = 161333787;
unsigned char var_25 = (unsigned char)83;
unsigned char var_26 = (unsigned char)88;
unsigned long long int var_27 = 2133723000026459714ULL;
unsigned long long int var_28 = 13469868502983921867ULL;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)34884;
unsigned long long int var_31 = 4396406466877362772ULL;
unsigned char var_32 = (unsigned char)136;
short var_33 = (short)15745;
unsigned long long int var_34 = 7964748931971877403ULL;
long long int var_35 = -3300926304559544005LL;
_Bool var_36 = (_Bool)0;
unsigned long long int var_37 = 12940167793762776011ULL;
unsigned long long int var_38 = 7071001403612766818ULL;
int var_39 = -1513109516;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)0;
signed char var_42 = (signed char)82;
int var_43 = -1801613765;
unsigned long long int var_44 = 9603696250267566234ULL;
unsigned char var_45 = (unsigned char)244;
_Bool var_46 = (_Bool)1;
short var_47 = (short)15083;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 2988710093514313207ULL;
int var_50 = -491969384;
unsigned int var_51 = 204292212U;
signed char var_52 = (signed char)127;
long long int var_53 = -7552051638717349389LL;
_Bool var_54 = (_Bool)1;
unsigned char var_55 = (unsigned char)99;
_Bool var_56 = (_Bool)0;
unsigned int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned char arr_2 [15] [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
unsigned short arr_6 [12] ;
unsigned int arr_8 [12] ;
unsigned int arr_12 [14] [14] ;
signed char arr_13 [14] [14] [14] ;
unsigned int arr_14 [14] [14] ;
short arr_15 [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] ;
signed char arr_18 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_19 [11] [11] ;
signed char arr_20 [11] ;
short arr_22 [11] [11] [11] ;
signed char arr_24 [11] ;
short arr_29 [11] [11] [11] [11] [11] ;
short arr_30 [11] [11] [11] [11] [11] ;
short arr_36 [11] [11] [11] ;
unsigned char arr_38 [11] [11] [11] [11] [11] [11] ;
signed char arr_43 [11] [11] [11] ;
signed char arr_47 [11] ;
unsigned int arr_51 [11] ;
unsigned char arr_55 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 431136502U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)12902;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3954941902779039284ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)2936;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 714836363U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 35532351U : 1360006270U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 1308849563U : 4244041980U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)8930 : (short)-24828;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2652276350U : 2339361401U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)-42 : (signed char)-39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-30548;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)12853 : (short)-13917;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)18994 : (short)13126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (short)-10944;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_47 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_51 [i_0] = 2313140095U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (unsigned char)36;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
