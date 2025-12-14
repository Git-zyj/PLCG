#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1109133781;
long long int var_1 = -935966182440112325LL;
signed char var_2 = (signed char)-101;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13612118705329035025ULL;
unsigned short var_6 = (unsigned short)42887;
unsigned char var_7 = (unsigned char)180;
signed char var_8 = (signed char)56;
long long int var_9 = 4795783951107489739LL;
short var_10 = (short)9778;
long long int var_11 = -8064913845440972812LL;
signed char var_12 = (signed char)-11;
long long int var_13 = -7738743180030010915LL;
short var_15 = (short)6057;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-100;
unsigned char var_19 = (unsigned char)147;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 16791072021528856620ULL;
unsigned int var_22 = 2413138276U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)85;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1067388775U;
unsigned short var_27 = (unsigned short)58599;
unsigned int var_28 = 917630827U;
long long int var_29 = -728949658311404862LL;
short var_30 = (short)-29172;
signed char var_31 = (signed char)94;
signed char var_32 = (signed char)-22;
unsigned long long int var_33 = 11382890489034529226ULL;
signed char var_34 = (signed char)-19;
int var_35 = -2095412471;
_Bool var_36 = (_Bool)0;
long long int arr_1 [20] ;
short arr_2 [20] ;
unsigned int arr_6 [13] ;
short arr_8 [13] ;
unsigned short arr_13 [13] [13] [13] [13] ;
_Bool arr_15 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_16 [13] [13] [13] ;
unsigned short arr_17 [13] [13] [13] [13] [13] [13] ;
signed char arr_34 [10] [10] [10] ;
signed char arr_43 [23] [23] ;
signed char arr_44 [23] [23] ;
_Bool arr_3 [20] ;
int arr_4 [20] ;
_Bool arr_5 [20] ;
unsigned long long int arr_18 [13] ;
unsigned long long int arr_19 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_23 [13] [13] ;
unsigned short arr_24 [13] ;
short arr_27 [13] ;
_Bool arr_28 [13] ;
unsigned int arr_29 [13] ;
unsigned int arr_30 [13] ;
short arr_36 [10] ;
unsigned long long int arr_37 [10] [10] ;
unsigned long long int arr_38 [10] ;
unsigned long long int arr_41 [16] ;
unsigned short arr_46 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 5867049422215359216LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-2273;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3393852050U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)-16586;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20926;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)12100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)63367;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_44 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 717078602;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 2066427884365871238ULL : 9430534553710009255ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 11612424675491272311ULL : 16305196604914636552ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = 14869109515506678253ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (unsigned short)54820;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (short)12666 : (short)-17883;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = 2030115432U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = 4019754389U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (short)7049;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = 3464121755922042074ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_38 [i_0] = 5765356998653105825ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? 17653461800090568511ULL : 6878376927241358571ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50882 : (unsigned short)29777;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
