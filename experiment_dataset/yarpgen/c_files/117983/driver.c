#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9121;
long long int var_2 = -1673530948269483977LL;
unsigned int var_3 = 3021848158U;
unsigned short var_4 = (unsigned short)32192;
unsigned short var_6 = (unsigned short)65244;
unsigned short var_7 = (unsigned short)48553;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3296034018U;
signed char var_12 = (signed char)108;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)5831;
short var_15 = (short)414;
unsigned long long int var_16 = 14154008199739907089ULL;
unsigned int var_17 = 2019656063U;
unsigned int var_18 = 2969946267U;
unsigned short var_19 = (unsigned short)56470;
short var_20 = (short)29861;
long long int var_21 = -5119206853632211481LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-71;
unsigned short var_24 = (unsigned short)34725;
unsigned short var_25 = (unsigned short)39234;
unsigned int var_26 = 2275338962U;
int var_27 = 194712923;
long long int var_28 = 1037321473323619953LL;
short var_29 = (short)27328;
int var_30 = 1360264212;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 2532047818U;
unsigned int arr_1 [12] [12] ;
long long int arr_2 [12] ;
unsigned char arr_5 [12] [12] ;
short arr_6 [12] [12] [12] ;
unsigned char arr_8 [12] [12] ;
signed char arr_11 [12] [12] ;
unsigned char arr_13 [12] [12] [12] ;
unsigned long long int arr_22 [12] [12] [12] ;
_Bool arr_25 [22] ;
long long int arr_26 [22] ;
unsigned int arr_29 [13] ;
_Bool arr_32 [13] [13] ;
int arr_34 [13] ;
unsigned short arr_35 [13] [13] ;
unsigned int arr_36 [13] [13] [13] ;
unsigned int arr_38 [13] ;
_Bool arr_40 [13] ;
unsigned short arr_42 [13] [13] ;
signed char arr_45 [11] ;
unsigned int arr_3 [12] [12] ;
signed char arr_7 [12] ;
unsigned short arr_17 [12] [12] ;
unsigned long long int arr_24 [12] ;
unsigned short arr_27 [22] [22] ;
_Bool arr_28 [22] [22] ;
unsigned short arr_33 [13] ;
long long int arr_43 [13] [13] [13] [13] ;
long long int arr_50 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 531827114U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -4191281552525494585LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)9367;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 7084726833251556371ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 6145533922553760881LL : -7128190746767719978LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 506643405U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_32 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = -492075036;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25440 : (unsigned short)56710;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1053441449U : 3722769284U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = 4206082823U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_42 [i_0] [i_1] = (unsigned short)1417;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 855019705U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18487 : (unsigned short)50912;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 4918002656868941727ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48962 : (unsigned short)51899;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (unsigned short)12613;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3343983658855691354LL : 826193077673827426LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_50 [i_0] [i_1] = (i_1 % 2 == 0) ? 5462466098813616838LL : -5600070833830135157LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
