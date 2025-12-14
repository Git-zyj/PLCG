#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30783;
long long int var_2 = -1376120248332450120LL;
int var_4 = 1350612966;
signed char var_5 = (signed char)-18;
unsigned long long int var_7 = 1881297336185903136ULL;
unsigned short var_8 = (unsigned short)58901;
signed char var_9 = (signed char)-79;
int var_10 = -266944717;
int var_11 = 1157293390;
unsigned long long int var_16 = 468981160516700597ULL;
unsigned long long int var_17 = 14456325646784517655ULL;
long long int var_18 = -1741504054985359281LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7586800646045074461ULL;
unsigned long long int var_21 = 13234275108091970563ULL;
signed char var_22 = (signed char)-63;
unsigned short var_23 = (unsigned short)44766;
_Bool var_24 = (_Bool)1;
int var_25 = 133238761;
int var_26 = 1736440925;
signed char var_27 = (signed char)-127;
int var_28 = 963915175;
long long int var_29 = -3055257795418729620LL;
unsigned short var_30 = (unsigned short)43493;
signed char var_31 = (signed char)-76;
unsigned char var_32 = (unsigned char)94;
unsigned int var_33 = 1623871608U;
unsigned long long int var_34 = 11844083750330675216ULL;
unsigned long long int var_35 = 177694671579734859ULL;
signed char arr_17 [21] [21] [21] ;
unsigned char arr_20 [21] [21] [21] [21] ;
short arr_36 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-13845 : (short)30957;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
