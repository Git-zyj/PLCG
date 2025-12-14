#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36826;
long long int var_1 = -5164741535927496912LL;
unsigned char var_2 = (unsigned char)18;
unsigned int var_3 = 4139064449U;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)193;
unsigned int var_6 = 503505773U;
unsigned int var_7 = 808426551U;
unsigned int var_8 = 1358334850U;
int var_9 = 1718523697;
unsigned long long int var_10 = 9079810007029197672ULL;
int zero = 0;
unsigned int var_11 = 99465680U;
unsigned long long int var_12 = 10854076844441416616ULL;
unsigned int var_13 = 3086554389U;
unsigned int var_14 = 40959057U;
unsigned char var_15 = (unsigned char)176;
long long int var_16 = -6480070643170070200LL;
unsigned char var_17 = (unsigned char)191;
unsigned char var_18 = (unsigned char)168;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2794674797U;
unsigned long long int var_21 = 7510966101619873187ULL;
short var_22 = (short)30647;
unsigned char var_23 = (unsigned char)72;
unsigned char var_24 = (unsigned char)81;
unsigned short var_25 = (unsigned short)37522;
unsigned int var_26 = 1750866975U;
unsigned int var_27 = 53943704U;
int var_28 = 893720238;
unsigned long long int var_29 = 17401589228574213485ULL;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 113887835U;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 2236950869U;
int var_35 = 1749584978;
unsigned int var_36 = 1933410667U;
unsigned long long int var_37 = 16196628654775406060ULL;
unsigned long long int var_38 = 15279397363581949009ULL;
long long int var_39 = 1066021846796534362LL;
unsigned int var_40 = 2265964110U;
unsigned char var_41 = (unsigned char)174;
unsigned char var_42 = (unsigned char)209;
unsigned int var_43 = 87439633U;
unsigned char var_44 = (unsigned char)106;
unsigned char var_45 = (unsigned char)45;
unsigned char var_46 = (unsigned char)182;
unsigned long long int var_47 = 8520002217851071255ULL;
int var_48 = 20082395;
unsigned short var_49 = (unsigned short)29358;
unsigned short var_50 = (unsigned short)9132;
unsigned short var_51 = (unsigned short)26296;
unsigned int var_52 = 996544196U;
unsigned int var_53 = 3319103623U;
unsigned int var_54 = 1951165733U;
_Bool var_55 = (_Bool)0;
unsigned char var_56 = (unsigned char)182;
unsigned int var_57 = 4076667262U;
unsigned char var_58 = (unsigned char)158;
short var_59 = (short)10368;
short var_60 = (short)12555;
short var_61 = (short)-13809;
unsigned char var_62 = (unsigned char)134;
short var_63 = (short)32378;
unsigned char var_64 = (unsigned char)139;
unsigned int var_65 = 3306921516U;
unsigned long long int var_66 = 3021210347965839826ULL;
unsigned long long int var_67 = 12719989638352531974ULL;
unsigned short arr_0 [14] ;
short arr_1 [14] ;
unsigned int arr_3 [14] ;
_Bool arr_4 [15] ;
long long int arr_5 [15] [15] ;
unsigned long long int arr_7 [15] ;
short arr_9 [15] [15] [15] ;
unsigned int arr_10 [15] ;
unsigned long long int arr_12 [15] ;
_Bool arr_14 [23] [23] ;
unsigned int arr_16 [23] [23] ;
short arr_17 [23] [23] [23] ;
_Bool arr_18 [23] [23] [23] ;
unsigned long long int arr_19 [23] [23] ;
unsigned int arr_20 [23] [23] ;
unsigned int arr_21 [23] [23] ;
unsigned char arr_22 [23] [23] [23] ;
unsigned short arr_23 [23] [23] [23] ;
unsigned char arr_26 [23] [23] [23] ;
short arr_28 [23] [23] [23] ;
unsigned long long int arr_29 [23] [23] [23] [23] ;
_Bool arr_30 [23] ;
_Bool arr_32 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)35128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-31381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 857342332U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1054828471244283372LL : 3688145813023697315LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 1808302580575337605ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)23581;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 4208051488U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 2833013193231615303ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 2057445069U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)28373;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = 4671891014991020797ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 1112458028U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = 1894400225U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)141 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)35674 : (unsigned short)21573;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)196 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)6943;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17520142647501976875ULL : 1740721490946533142ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
