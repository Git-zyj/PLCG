#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 597087209U;
short var_2 = (short)-3144;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4014212785004993548ULL;
long long int var_5 = -5822189059387988552LL;
unsigned long long int var_6 = 17778465386261367615ULL;
unsigned int var_7 = 1617580363U;
long long int var_8 = 4280987853156364481LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 4693069300483772635LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)224;
unsigned char var_13 = (unsigned char)55;
unsigned char var_14 = (unsigned char)20;
signed char var_15 = (signed char)-39;
int zero = 0;
int var_16 = -2050353619;
unsigned int var_17 = 3516594874U;
unsigned long long int var_18 = 13819420800292994892ULL;
signed char var_19 = (signed char)-71;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5026072495283261160LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 16633180107195341060ULL;
long long int var_24 = -962284067972156890LL;
unsigned char var_25 = (unsigned char)180;
int var_26 = -1141786822;
unsigned char var_27 = (unsigned char)241;
long long int var_28 = 4094046681470989329LL;
unsigned short var_29 = (unsigned short)37911;
_Bool var_30 = (_Bool)1;
short var_31 = (short)21450;
unsigned char var_32 = (unsigned char)98;
long long int var_33 = -4740936564505283485LL;
unsigned char var_34 = (unsigned char)44;
unsigned char var_35 = (unsigned char)134;
unsigned short var_36 = (unsigned short)34955;
unsigned long long int var_37 = 12325349429254397266ULL;
long long int var_38 = -1106348468863204271LL;
unsigned char var_39 = (unsigned char)197;
int var_40 = -1086976676;
_Bool var_41 = (_Bool)0;
long long int var_42 = 2335603744216929217LL;
long long int arr_0 [11] ;
unsigned int arr_2 [11] ;
unsigned char arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned char arr_7 [19] [19] ;
int arr_9 [19] ;
unsigned char arr_10 [19] ;
unsigned char arr_12 [19] [19] ;
unsigned char arr_13 [19] [19] [19] ;
long long int arr_15 [19] [19] ;
long long int arr_16 [19] [19] ;
int arr_18 [19] [19] [19] [19] ;
unsigned long long int arr_21 [19] [19] ;
unsigned char arr_23 [19] [19] [19] ;
int arr_27 [19] [19] [19] ;
int arr_33 [14] [14] ;
int arr_48 [18] ;
unsigned int arr_8 [19] [19] [19] ;
short arr_11 [19] [19] ;
unsigned short arr_17 [19] [19] [19] [19] ;
signed char arr_24 [19] ;
unsigned short arr_25 [19] ;
unsigned int arr_30 [19] ;
unsigned char arr_45 [14] [14] [14] [14] ;
unsigned short arr_46 [14] [14] [14] [14] ;
short arr_50 [18] ;
long long int arr_51 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1428334943949367069LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 591533326U : 1666825384U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 18033728780322158236ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 5439281631129203707ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 3782115930113404148ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 405679546;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 5889628576004434233LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = -5297530715572280794LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1587970387;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = 32378371691054776ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -1073485062;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_33 [i_0] [i_1] = -453614010;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_48 [i_0] = -898833998;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3167997602U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-838;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8879;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)22 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61667 : (unsigned short)13368;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 3921670273U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29000;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = (short)-13859;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = 4644174141783322524LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
