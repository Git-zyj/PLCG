#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 151967280;
unsigned int var_1 = 3801831423U;
_Bool var_2 = (_Bool)1;
int var_3 = -767444499;
int var_4 = -66707998;
_Bool var_5 = (_Bool)0;
int var_6 = 816426904;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)31434;
int var_9 = -1674057095;
signed char var_10 = (signed char)-122;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-41;
short var_14 = (short)19075;
signed char var_15 = (signed char)22;
unsigned long long int var_16 = 12334616319380000944ULL;
unsigned long long int var_17 = 9459943669304712338ULL;
short var_18 = (short)28566;
int zero = 0;
int var_19 = 496508820;
int var_20 = 1585383037;
unsigned int var_21 = 2629383012U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7247909214658127070ULL;
unsigned long long int var_24 = 17436800619465901987ULL;
unsigned short var_25 = (unsigned short)756;
long long int var_26 = -5733803632338464162LL;
short var_27 = (short)14611;
int var_28 = 819670372;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-103;
short var_31 = (short)-27198;
unsigned long long int var_32 = 18096330726047812985ULL;
short var_33 = (short)-8493;
signed char var_34 = (signed char)90;
unsigned short var_35 = (unsigned short)61770;
long long int var_36 = -431906025238319939LL;
short var_37 = (short)-29340;
short var_38 = (short)4008;
long long int var_39 = -4058736868211131567LL;
unsigned long long int var_40 = 14384973370953260013ULL;
_Bool var_41 = (_Bool)1;
unsigned short var_42 = (unsigned short)16046;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)23937;
unsigned short var_45 = (unsigned short)48972;
unsigned long long int var_46 = 12627491078431281123ULL;
unsigned short var_47 = (unsigned short)31960;
unsigned short var_48 = (unsigned short)22190;
unsigned char var_49 = (unsigned char)197;
short var_50 = (short)-5008;
long long int var_51 = -5357812419276854876LL;
unsigned long long int var_52 = 4055486125742196373ULL;
unsigned char var_53 = (unsigned char)166;
long long int var_54 = 2421503750640389945LL;
unsigned int var_55 = 2646898078U;
int var_56 = 402408262;
unsigned short var_57 = (unsigned short)45562;
unsigned short var_58 = (unsigned short)6969;
unsigned int var_59 = 4127945069U;
_Bool var_60 = (_Bool)0;
unsigned int arr_1 [13] ;
_Bool arr_2 [13] [13] ;
long long int arr_4 [14] [14] ;
_Bool arr_6 [14] ;
short arr_8 [22] ;
short arr_10 [22] ;
_Bool arr_11 [22] [22] ;
int arr_12 [22] [22] [22] ;
_Bool arr_13 [22] [22] [22] [22] ;
_Bool arr_14 [22] [22] [22] ;
_Bool arr_15 [22] [22] [22] [22] ;
int arr_17 [22] [22] [22] [22] ;
unsigned short arr_18 [22] [22] [22] ;
_Bool arr_19 [22] [22] ;
unsigned char arr_20 [22] [22] [22] ;
long long int arr_21 [22] ;
unsigned short arr_23 [22] [22] [22] ;
_Bool arr_24 [22] ;
_Bool arr_25 [22] ;
int arr_28 [22] [22] [22] [22] ;
unsigned long long int arr_42 [20] ;
unsigned char arr_55 [10] ;
unsigned short arr_3 [13] [13] ;
unsigned short arr_22 [22] ;
unsigned char arr_35 [22] [22] ;
_Bool arr_36 [22] ;
unsigned short arr_39 [22] ;
unsigned int arr_40 [22] ;
long long int arr_46 [17] ;
signed char arr_57 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 288110609U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1901652176648871612LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-29125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)28708;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1698031413 : 1584121391;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1864263719 : 2140659426;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)40913;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = -7611597304524560582LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)37958;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 1240519127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = 6322186811293539916ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_55 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24545;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned short)29755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)33 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (unsigned short)11140;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = 3997477673U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_46 [i_0] = -3550046701452934773LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)34;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_57 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
