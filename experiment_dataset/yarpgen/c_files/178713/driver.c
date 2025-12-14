#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
short var_1 = (short)-6975;
short var_2 = (short)-9214;
unsigned int var_4 = 2594913992U;
_Bool var_5 = (_Bool)0;
int var_6 = -1560278995;
long long int var_7 = -3449165657258722621LL;
unsigned long long int var_8 = 3906670145305293686ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)60;
unsigned short var_11 = (unsigned short)13404;
_Bool var_12 = (_Bool)1;
int var_13 = -1349533186;
signed char var_14 = (signed char)14;
int zero = 0;
unsigned int var_15 = 3003003576U;
short var_16 = (short)-377;
signed char var_17 = (signed char)-73;
short var_18 = (short)-8872;
unsigned char var_19 = (unsigned char)222;
short var_20 = (short)-20809;
unsigned long long int var_21 = 3743077756557920353ULL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)3;
signed char var_24 = (signed char)-75;
signed char arr_3 [13] [13] [13] ;
unsigned int arr_4 [13] [13] ;
signed char arr_6 [13] [13] [13] ;
unsigned char arr_15 [12] [12] [12] [12] ;
_Bool arr_18 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1642828760U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)117 : (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
