#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned int var_2 = 1214288227U;
unsigned int var_3 = 3138937820U;
unsigned char var_4 = (unsigned char)230;
short var_5 = (short)19747;
unsigned int var_6 = 3550213U;
unsigned int var_7 = 2603590202U;
unsigned char var_8 = (unsigned char)99;
unsigned int var_9 = 3638348963U;
short var_10 = (short)8037;
short var_11 = (short)-4146;
unsigned short var_12 = (unsigned short)18897;
short var_13 = (short)18115;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11855208635638303121ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)18071;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15283553013278726123ULL;
unsigned short var_19 = (unsigned short)51075;
unsigned int var_20 = 2729568209U;
unsigned short var_21 = (unsigned short)43193;
unsigned short var_22 = (unsigned short)12170;
signed char var_23 = (signed char)57;
unsigned int var_24 = 2212870221U;
short var_25 = (short)-3155;
unsigned short var_26 = (unsigned short)39557;
short var_27 = (short)24852;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-58;
unsigned long long int var_30 = 14755692124834003374ULL;
unsigned int var_31 = 1196063500U;
signed char var_32 = (signed char)-11;
unsigned int var_33 = 2691161085U;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 1081204143U;
unsigned char var_36 = (unsigned char)24;
short var_37 = (short)16039;
short var_38 = (short)-6726;
unsigned char var_39 = (unsigned char)171;
signed char var_40 = (signed char)-17;
_Bool var_41 = (_Bool)0;
signed char arr_13 [20] [20] [20] [20] ;
signed char arr_14 [20] [20] ;
unsigned char arr_17 [20] [20] [20] ;
signed char arr_27 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)14 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)115 : (signed char)22;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
