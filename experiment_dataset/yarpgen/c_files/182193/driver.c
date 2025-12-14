#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -827875335;
signed char var_2 = (signed char)-42;
unsigned long long int var_3 = 11746455569715523594ULL;
long long int var_4 = -8007786035254677008LL;
signed char var_5 = (signed char)21;
short var_6 = (short)-16945;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)134;
signed char var_9 = (signed char)-77;
int zero = 0;
signed char var_10 = (signed char)48;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)68;
unsigned short var_13 = (unsigned short)890;
unsigned char var_14 = (unsigned char)189;
unsigned int var_15 = 3621570035U;
signed char var_16 = (signed char)-70;
unsigned int var_17 = 2382695201U;
signed char var_18 = (signed char)-15;
short var_19 = (short)-22656;
unsigned short var_20 = (unsigned short)2483;
short var_21 = (short)21946;
signed char var_22 = (signed char)(-127 - 1);
unsigned long long int var_23 = 11031533387643094831ULL;
long long int var_24 = 3701648461267331860LL;
unsigned short var_25 = (unsigned short)10854;
short var_26 = (short)-29326;
unsigned int var_27 = 1261983078U;
unsigned char var_28 = (unsigned char)122;
unsigned short var_29 = (unsigned short)13494;
unsigned int var_30 = 3212626880U;
_Bool var_31 = (_Bool)0;
int var_32 = -299778406;
signed char var_33 = (signed char)-64;
unsigned long long int var_34 = 4857009628080598186ULL;
signed char var_35 = (signed char)-72;
long long int var_36 = 6998474174198563464LL;
signed char var_37 = (signed char)58;
unsigned char var_38 = (unsigned char)79;
unsigned char var_39 = (unsigned char)120;
_Bool var_40 = (_Bool)0;
unsigned long long int arr_2 [11] ;
signed char arr_6 [19] ;
unsigned int arr_7 [19] ;
_Bool arr_8 [19] [19] [19] ;
unsigned int arr_11 [19] [19] [19] ;
signed char arr_12 [19] [19] [19] [19] ;
long long int arr_14 [19] [19] [19] ;
int arr_15 [19] [19] [19] [19] [19] ;
unsigned long long int arr_18 [19] [19] [19] ;
signed char arr_23 [19] [19] ;
_Bool arr_25 [19] [19] [19] [19] ;
signed char arr_32 [19] [19] [19] [19] ;
int arr_35 [13] ;
int arr_36 [13] ;
int arr_45 [13] [13] [13] [13] ;
_Bool arr_46 [13] ;
_Bool arr_50 [13] ;
unsigned short arr_51 [13] [13] [13] [13] [13] ;
unsigned long long int arr_59 [25] [25] ;
_Bool arr_60 [25] ;
unsigned long long int arr_61 [25] ;
_Bool arr_62 [24] ;
signed char arr_63 [24] ;
int arr_65 [24] ;
unsigned char arr_5 [11] [11] ;
unsigned short arr_10 [19] [19] ;
int arr_26 [19] [19] ;
short arr_27 [19] [19] ;
int arr_33 [19] [19] [19] [19] ;
int arr_34 [19] [19] ;
_Bool arr_43 [13] [13] [13] [13] ;
int arr_52 [13] [13] ;
signed char arr_53 [13] ;
_Bool arr_54 [13] [13] [13] ;
_Bool arr_58 [13] ;
int arr_66 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4350394330528809889ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3034612414U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1854294907U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -765262223632209951LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -1585661521;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1405330534381465109ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_35 [i_0] = -458034667;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 1738039178;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 57177363;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_46 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_50 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)60883;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_59 [i_0] [i_1] = 1028568053105610898ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_60 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? 16708188688219382902ULL : 2749443416873868608ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_62 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_63 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_65 [i_0] = 884039453;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)120 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)46291;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = 699869181;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (short)7169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 1767964937;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = 281919438;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_52 [i_0] [i_1] = 905428891;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_53 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_58 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_66 [i_0] = -75619264;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_54 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_66 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
