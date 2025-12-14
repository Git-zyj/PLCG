#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)141;
long long int var_3 = -5183480529212600773LL;
short var_4 = (short)-22013;
long long int var_5 = -2811303299658454838LL;
unsigned short var_7 = (unsigned short)2242;
short var_8 = (short)17423;
long long int var_9 = 3213285475900077813LL;
unsigned char var_10 = (unsigned char)24;
unsigned char var_11 = (unsigned char)232;
unsigned char var_12 = (unsigned char)34;
int var_13 = 1678349645;
unsigned short var_14 = (unsigned short)11056;
int zero = 0;
unsigned char var_15 = (unsigned char)77;
int var_16 = -1048494261;
int var_17 = -765121159;
long long int var_18 = -6834572258592739132LL;
_Bool var_19 = (_Bool)1;
int var_20 = -1242718562;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)19050;
unsigned char var_23 = (unsigned char)100;
unsigned char var_24 = (unsigned char)66;
int var_25 = -579675480;
unsigned char var_26 = (unsigned char)222;
unsigned short var_27 = (unsigned short)9780;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)74;
_Bool var_30 = (_Bool)1;
long long int var_31 = 7603644501813266618LL;
unsigned char var_32 = (unsigned char)45;
unsigned short var_33 = (unsigned short)62156;
unsigned char var_34 = (unsigned char)118;
int var_35 = -890624585;
unsigned short var_36 = (unsigned short)27203;
int var_37 = -357746257;
short var_38 = (short)-3254;
unsigned short var_39 = (unsigned short)19084;
unsigned short var_40 = (unsigned short)41257;
long long int var_41 = 2655481862549744290LL;
unsigned char var_42 = (unsigned char)140;
_Bool var_43 = (_Bool)1;
short var_44 = (short)13753;
_Bool var_45 = (_Bool)0;
short var_46 = (short)25461;
_Bool arr_1 [23] ;
_Bool arr_2 [23] ;
int arr_8 [23] [23] [23] ;
short arr_12 [23] [23] [23] [23] ;
signed char arr_27 [10] [10] [10] ;
int arr_32 [10] [10] [10] [10] [10] ;
long long int arr_36 [10] ;
int arr_41 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -181059353;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)9722;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)7 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -557986768 : -340265532;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = -2544385091688804967LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = 2088376978;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
