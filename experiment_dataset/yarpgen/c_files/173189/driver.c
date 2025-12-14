#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11493564863912085141ULL;
signed char var_1 = (signed char)-81;
unsigned char var_2 = (unsigned char)17;
unsigned char var_3 = (unsigned char)149;
int var_4 = 18064714;
long long int var_5 = -5498592598463089304LL;
long long int var_6 = -1771310451917874983LL;
signed char var_7 = (signed char)49;
signed char var_8 = (signed char)-72;
signed char var_9 = (signed char)105;
unsigned char var_10 = (unsigned char)157;
long long int var_11 = 535982276484739904LL;
long long int var_12 = 2119340671705688324LL;
unsigned long long int var_13 = 13483848446452374387ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4655432500161042226LL;
int zero = 0;
signed char var_16 = (signed char)-94;
int var_17 = -2126815629;
unsigned short var_18 = (unsigned short)52847;
short var_19 = (short)-29028;
short var_20 = (short)-24511;
unsigned int var_21 = 3923190244U;
unsigned short var_22 = (unsigned short)16954;
signed char var_23 = (signed char)113;
signed char var_24 = (signed char)59;
unsigned int var_25 = 2523209346U;
unsigned char var_26 = (unsigned char)196;
unsigned char var_27 = (unsigned char)54;
unsigned int var_28 = 1046036318U;
unsigned long long int var_29 = 3846835711954117535ULL;
signed char var_30 = (signed char)-100;
long long int var_31 = -6427579251659332048LL;
int var_32 = 583555495;
short var_33 = (short)-6888;
short var_34 = (short)-32572;
unsigned char var_35 = (unsigned char)129;
long long int var_36 = -666941004664932195LL;
signed char var_37 = (signed char)22;
unsigned long long int var_38 = 5004985030300541471ULL;
unsigned char var_39 = (unsigned char)148;
long long int var_40 = -3183283267630165164LL;
unsigned short var_41 = (unsigned short)391;
long long int var_42 = 6397768676297955098LL;
signed char var_43 = (signed char)66;
signed char var_44 = (signed char)-63;
unsigned int var_45 = 3166779557U;
long long int var_46 = 1747151208150357645LL;
signed char var_47 = (signed char)65;
unsigned char var_48 = (unsigned char)218;
unsigned int var_49 = 2620775578U;
signed char var_50 = (signed char)-72;
unsigned int var_51 = 2714025999U;
long long int var_52 = -7053758444607967596LL;
unsigned char var_53 = (unsigned char)253;
signed char arr_1 [11] ;
long long int arr_2 [11] ;
signed char arr_4 [11] [11] [11] ;
signed char arr_5 [11] [11] ;
int arr_6 [11] [11] [11] ;
long long int arr_7 [11] [11] ;
unsigned long long int arr_8 [11] ;
unsigned char arr_9 [11] ;
long long int arr_10 [11] ;
long long int arr_11 [11] [11] [11] ;
unsigned int arr_16 [11] [11] ;
signed char arr_21 [16] [16] ;
signed char arr_22 [16] ;
signed char arr_23 [16] ;
signed char arr_24 [16] [16] ;
signed char arr_25 [16] [16] ;
unsigned char arr_26 [16] ;
_Bool arr_27 [16] [16] [16] ;
unsigned int arr_28 [16] [16] ;
short arr_29 [16] ;
signed char arr_30 [16] ;
signed char arr_34 [16] [16] [16] ;
int arr_36 [16] [16] [16] [16] [16] ;
long long int arr_38 [16] [16] [16] [16] ;
long long int arr_39 [16] [16] ;
unsigned char arr_3 [11] ;
long long int arr_12 [11] [11] [11] ;
unsigned int arr_37 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -6351764127424092825LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1291768009;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = -5371752977263671656LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 17629674972549965013ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -8494753991547086634LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 4466222904815936631LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = 1458269004U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 927920133U : 1652039187U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (short)-16541;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1215304397 : 751256926;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 7172772093612125415LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_39 [i_0] [i_1] = -3486189133485255166LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1859863359496704813LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 3850338583U : 148144569U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
