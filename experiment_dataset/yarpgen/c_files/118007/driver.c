#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1346829825;
unsigned short var_1 = (unsigned short)31861;
unsigned char var_2 = (unsigned char)123;
unsigned long long int var_3 = 10929822177871086503ULL;
unsigned short var_4 = (unsigned short)11401;
int var_5 = -1294455085;
unsigned int var_7 = 4044207792U;
int var_8 = -1220288069;
int var_9 = 1950259605;
unsigned long long int var_10 = 8358586421717251247ULL;
short var_11 = (short)-5339;
int var_12 = -1290892977;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 78124106U;
int var_15 = -1896376128;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)318;
unsigned long long int var_18 = 9061423403048113765ULL;
unsigned int var_19 = 533587318U;
int var_20 = -1018416037;
unsigned short var_21 = (unsigned short)9379;
long long int var_22 = -3691622820334439933LL;
int var_23 = 999111096;
int var_24 = 951967813;
int var_25 = -681275195;
int var_26 = -1989901628;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)19;
short var_29 = (short)-5604;
unsigned short var_30 = (unsigned short)51885;
signed char var_31 = (signed char)-67;
long long int var_32 = 1948073416025319992LL;
unsigned short var_33 = (unsigned short)54250;
unsigned int var_34 = 3927075714U;
short var_35 = (short)79;
unsigned short var_36 = (unsigned short)44371;
unsigned short var_37 = (unsigned short)21768;
short var_38 = (short)1991;
signed char var_39 = (signed char)111;
unsigned short var_40 = (unsigned short)4750;
signed char var_41 = (signed char)-60;
int arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_4 [24] [24] ;
int arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] ;
unsigned char arr_8 [19] ;
long long int arr_9 [19] [19] ;
unsigned char arr_10 [19] ;
unsigned short arr_13 [19] ;
unsigned long long int arr_14 [19] [19] [19] ;
unsigned long long int arr_17 [19] [19] ;
unsigned char arr_18 [19] [19] ;
unsigned int arr_19 [19] [19] [19] ;
unsigned short arr_21 [19] [19] [19] [19] ;
unsigned long long int arr_22 [19] [19] [19] [19] ;
_Bool arr_23 [19] [19] [19] [19] ;
short arr_26 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_27 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_31 [24] [24] ;
unsigned short arr_32 [24] ;
signed char arr_34 [24] [24] [24] [24] ;
unsigned long long int arr_11 [19] ;
unsigned long long int arr_16 [19] [19] [19] ;
unsigned char arr_20 [19] ;
unsigned short arr_28 [19] [19] [19] [19] ;
int arr_36 [24] [24] ;
int arr_41 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -231473894;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3967748195U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)43916;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 5057692821875192078ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -214330741;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 8576219044891409030LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)17116;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5015839076250820734ULL : 8862179147972391782ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = 10593744405775556190ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2655385149U : 3113311505U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10730;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 1441657318706829274ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)3807 : (short)-19107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)53967;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)42998;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (unsigned short)5394;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-25 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 6288022956899574538ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1271145610081014339ULL : 6721093895284717208ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)172 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)1176 : (unsigned short)31337;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = (i_1 % 2 == 0) ? 47750227 : -663378368;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_41 [i_0] [i_1] = (i_1 % 2 == 0) ? 482070613 : -365462241;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
