#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 764501503;
short var_1 = (short)24752;
unsigned short var_2 = (unsigned short)33093;
long long int var_3 = 3017288498524813868LL;
signed char var_4 = (signed char)-64;
int var_5 = 561500325;
short var_6 = (short)-30310;
unsigned short var_7 = (unsigned short)30318;
_Bool var_9 = (_Bool)0;
int var_10 = 1402628614;
int zero = 0;
int var_12 = 1409567170;
long long int var_13 = -8392636326659623501LL;
unsigned short var_14 = (unsigned short)34896;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4535891605082520625LL;
int var_17 = 1884738791;
unsigned long long int var_18 = 17285537442311855228ULL;
int var_19 = -594451035;
short var_20 = (short)-7176;
unsigned char var_21 = (unsigned char)233;
unsigned long long int var_22 = 798085784733271643ULL;
long long int var_23 = -7613321960066480486LL;
short var_24 = (short)29443;
short arr_0 [23] ;
int arr_1 [23] ;
signed char arr_2 [22] ;
_Bool arr_3 [22] ;
_Bool arr_9 [22] [22] [22] [22] [22] [22] ;
short arr_10 [22] [22] [22] [22] ;
unsigned short arr_11 [22] ;
short arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-733;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 484499018;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)6573 : (short)-16648;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15823 : (unsigned short)6371;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-31610 : (short)11352;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
