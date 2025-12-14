#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-7729;
short var_2 = (short)8757;
unsigned long long int var_3 = 14156085472087796309ULL;
unsigned int var_4 = 881868927U;
signed char var_5 = (signed char)71;
unsigned short var_6 = (unsigned short)55461;
int var_7 = 1166465307;
int var_8 = 1153236069;
short var_9 = (short)-9676;
_Bool var_10 = (_Bool)0;
short var_11 = (short)24530;
int var_12 = 1417345246;
unsigned long long int var_13 = 7386614754514744922ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-2501;
signed char var_16 = (signed char)73;
int var_17 = -1057809046;
int zero = 0;
long long int var_18 = 2647584835696038467LL;
long long int var_19 = 5434302519125066353LL;
unsigned char var_20 = (unsigned char)107;
long long int var_21 = -8445774705804458248LL;
signed char var_22 = (signed char)98;
unsigned short var_23 = (unsigned short)19977;
int var_24 = 2108783362;
int var_25 = -1291026143;
unsigned long long int var_26 = 12015410896500763707ULL;
long long int var_27 = 5074581966014886412LL;
short var_28 = (short)-19577;
int var_29 = -1782237084;
signed char var_30 = (signed char)5;
unsigned short var_31 = (unsigned short)60469;
long long int var_32 = 6353209641603847901LL;
short var_33 = (short)-2688;
_Bool var_34 = (_Bool)0;
long long int var_35 = -6844413517152435055LL;
unsigned long long int var_36 = 17631401195900238148ULL;
short var_37 = (short)11610;
signed char var_38 = (signed char)-102;
unsigned long long int var_39 = 13376648872204122098ULL;
unsigned short var_40 = (unsigned short)7212;
unsigned short var_41 = (unsigned short)58563;
_Bool var_42 = (_Bool)0;
unsigned int var_43 = 596441148U;
long long int var_44 = -793807495115029214LL;
_Bool var_45 = (_Bool)0;
unsigned short var_46 = (unsigned short)42041;
long long int var_47 = 7741296266828017672LL;
unsigned char var_48 = (unsigned char)164;
unsigned long long int var_49 = 416581576869402286ULL;
unsigned short var_50 = (unsigned short)41143;
unsigned char var_51 = (unsigned char)83;
long long int arr_6 [18] [18] ;
short arr_23 [18] ;
signed char arr_29 [18] [18] [18] [18] [18] ;
unsigned char arr_30 [18] [18] [18] [18] [18] ;
unsigned long long int arr_41 [18] ;
long long int arr_42 [18] ;
short arr_43 [18] ;
unsigned long long int arr_50 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 3550509382012104290LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (short)10762;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_41 [i_0] = 5711008424003514994ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = 127077253925583170LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = (short)-14585;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_50 [i_0] = 10564894908453575114ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
