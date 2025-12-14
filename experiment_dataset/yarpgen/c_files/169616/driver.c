#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned char var_1 = (unsigned char)59;
signed char var_2 = (signed char)123;
int var_3 = 40380158;
unsigned int var_4 = 436712924U;
short var_5 = (short)29763;
signed char var_6 = (signed char)1;
signed char var_7 = (signed char)29;
int var_9 = 1297741951;
long long int var_10 = 1052906911371695094LL;
unsigned int var_11 = 3062967017U;
long long int var_12 = 6137946962906572941LL;
unsigned short var_13 = (unsigned short)7992;
signed char var_14 = (signed char)-22;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)102;
unsigned char var_17 = (unsigned char)77;
unsigned short var_18 = (unsigned short)13254;
int zero = 0;
long long int var_19 = -5319489357691300493LL;
int var_20 = 727334434;
unsigned int var_21 = 988568451U;
unsigned short var_22 = (unsigned short)36353;
unsigned short var_23 = (unsigned short)13199;
unsigned short var_24 = (unsigned short)6763;
unsigned int var_25 = 4134564726U;
unsigned int var_26 = 3596957784U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-15935;
short var_29 = (short)-27704;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-44;
unsigned char var_32 = (unsigned char)163;
unsigned short var_33 = (unsigned short)15946;
signed char var_34 = (signed char)-84;
long long int var_35 = 728204405244637460LL;
short var_36 = (short)4645;
signed char var_37 = (signed char)-79;
signed char var_38 = (signed char)-91;
unsigned int var_39 = 3947713453U;
unsigned short var_40 = (unsigned short)41307;
unsigned long long int var_41 = 2862616726682719445ULL;
long long int var_42 = -8755293396778032144LL;
unsigned short var_43 = (unsigned short)63320;
signed char var_44 = (signed char)-126;
unsigned short var_45 = (unsigned short)11942;
unsigned short arr_0 [14] ;
signed char arr_1 [14] ;
unsigned char arr_2 [14] ;
signed char arr_6 [14] [14] ;
unsigned long long int arr_13 [14] [14] [14] [14] ;
unsigned int arr_14 [14] [14] ;
unsigned short arr_15 [14] [14] ;
unsigned short arr_16 [14] ;
unsigned char arr_20 [14] [14] [14] ;
unsigned long long int arr_23 [14] [14] [14] ;
_Bool arr_28 [14] [14] [14] ;
signed char arr_29 [14] [14] [14] [14] ;
short arr_31 [14] [14] [14] [14] [14] ;
signed char arr_34 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_3 [14] ;
short arr_7 [14] [14] ;
unsigned int arr_18 [14] ;
unsigned char arr_26 [14] ;
long long int arr_35 [14] ;
short arr_39 [14] [14] [14] [14] [14] [14] [14] ;
unsigned int arr_40 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)47773;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 13427462559147125425ULL : 14929480644071415172ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 2135639944U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)9786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)47091;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1056321363601050358ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)26184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (short)16993;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 1795761230U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = -3919454253710967803LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)5121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_40 [i_0] [i_1] = 2581937274U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
