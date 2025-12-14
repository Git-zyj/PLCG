#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = 1249530080;
short var_4 = (short)23680;
signed char var_6 = (signed char)-72;
unsigned long long int var_7 = 7202964093094443555ULL;
short var_8 = (short)-29307;
short var_9 = (short)-3750;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7947032831314545274LL;
int var_12 = -1195626624;
short var_13 = (short)-17920;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1944458707;
signed char var_16 = (signed char)112;
unsigned long long int var_17 = 10033245000592797231ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8324301402643676713LL;
unsigned long long int var_20 = 2189400918850595054ULL;
short var_21 = (short)2172;
unsigned char var_22 = (unsigned char)84;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)72;
unsigned char var_25 = (unsigned char)106;
short var_26 = (short)10860;
signed char var_27 = (signed char)-98;
signed char var_28 = (signed char)97;
short var_29 = (short)14106;
unsigned char var_30 = (unsigned char)127;
long long int var_31 = -2361481836292292300LL;
signed char var_32 = (signed char)-89;
signed char var_33 = (signed char)90;
unsigned long long int var_34 = 641961474865605363ULL;
signed char var_35 = (signed char)31;
short var_36 = (short)-14291;
short var_37 = (short)-30655;
unsigned long long int var_38 = 10885746365347650511ULL;
short var_39 = (short)-17408;
short var_40 = (short)-2588;
signed char var_41 = (signed char)-78;
signed char var_42 = (signed char)-73;
signed char var_43 = (signed char)103;
long long int var_44 = 70148632550681030LL;
unsigned long long int var_45 = 4970488999655665514ULL;
short var_46 = (short)-16544;
short var_47 = (short)-14465;
signed char arr_1 [18] [18] ;
short arr_7 [16] ;
unsigned char arr_10 [16] ;
short arr_14 [16] ;
short arr_18 [16] [16] [16] [16] [16] ;
unsigned char arr_22 [16] [16] [16] ;
short arr_25 [16] [16] [16] [16] ;
unsigned long long int arr_27 [16] [16] ;
signed char arr_29 [16] [16] [16] [16] ;
_Bool arr_35 [16] [16] [16] [16] [16] ;
short arr_36 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_4 [18] ;
short arr_5 [18] ;
short arr_21 [16] [16] [16] ;
short arr_40 [16] [16] [16] ;
short arr_47 [16] [16] ;
unsigned long long int arr_54 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)-1250;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (short)3541;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-2779;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)-13822;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = 1248072056476000715ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)9982;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2030364387997699400ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-28231;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-29583 : (short)7714;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-21027 : (short)-5397;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-26362 : (short)-24982;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? 8749583215962123139ULL : 1460231361079443383ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_54 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
