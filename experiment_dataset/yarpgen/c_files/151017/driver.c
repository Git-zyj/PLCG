#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-91;
unsigned int var_11 = 4031123268U;
short var_12 = (short)6394;
unsigned char var_14 = (unsigned char)202;
short var_16 = (short)-993;
short var_17 = (short)14398;
int zero = 0;
unsigned short var_18 = (unsigned short)4011;
unsigned short var_19 = (unsigned short)36705;
unsigned short var_20 = (unsigned short)56911;
signed char var_21 = (signed char)-96;
unsigned int var_22 = 2291546678U;
int var_23 = -1197647430;
unsigned int var_24 = 1569502381U;
long long int var_25 = 1447385817334412437LL;
unsigned char var_26 = (unsigned char)42;
unsigned char var_27 = (unsigned char)164;
unsigned char var_28 = (unsigned char)186;
signed char var_29 = (signed char)-84;
unsigned char var_30 = (unsigned char)100;
unsigned short var_31 = (unsigned short)12636;
unsigned int var_32 = 1690350708U;
signed char var_33 = (signed char)-79;
unsigned int var_34 = 3006900947U;
unsigned char arr_2 [25] ;
_Bool arr_14 [10] [10] ;
unsigned long long int arr_5 [25] [25] [25] ;
signed char arr_6 [25] ;
int arr_12 [25] ;
unsigned short arr_13 [25] ;
unsigned int arr_20 [10] ;
unsigned long long int arr_29 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10439783510717912254ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 1500199315;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned short)25295;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 3666712330U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 16287192820030824980ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
