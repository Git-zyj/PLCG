#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
signed char var_2 = (signed char)118;
short var_3 = (short)-5323;
short var_5 = (short)30744;
short var_6 = (short)2731;
short var_7 = (short)21378;
int var_8 = -1366908374;
short var_9 = (short)6054;
unsigned long long int var_10 = 17963772400026885648ULL;
int var_11 = 1677602763;
unsigned long long int var_12 = 3216922287990351205ULL;
int var_13 = -1596701387;
int zero = 0;
unsigned long long int var_14 = 10313046691662714460ULL;
short var_15 = (short)-7880;
short var_16 = (short)15432;
signed char var_17 = (signed char)27;
long long int var_18 = 5935005069397537937LL;
short var_19 = (short)13900;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)44;
_Bool var_22 = (_Bool)1;
long long int var_23 = 8306557797134008161LL;
unsigned char var_24 = (unsigned char)18;
unsigned long long int var_25 = 6058954437550629344ULL;
unsigned char var_26 = (unsigned char)238;
unsigned long long int var_27 = 15734291235022090662ULL;
_Bool var_28 = (_Bool)0;
short var_29 = (short)-20290;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
short var_32 = (short)598;
unsigned char var_33 = (unsigned char)208;
long long int var_34 = -4148618318750159894LL;
unsigned long long int var_35 = 8288306554291565190ULL;
unsigned char var_36 = (unsigned char)204;
unsigned char arr_0 [18] ;
long long int arr_1 [18] ;
unsigned short arr_2 [18] [18] ;
long long int arr_3 [24] ;
short arr_4 [24] ;
signed char arr_5 [24] [24] ;
unsigned short arr_6 [10] ;
unsigned long long int arr_8 [10] ;
unsigned short arr_9 [10] ;
_Bool arr_11 [10] ;
unsigned short arr_12 [10] [10] ;
unsigned long long int arr_14 [10] [10] ;
short arr_15 [10] [10] ;
unsigned long long int arr_16 [10] [10] ;
short arr_18 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -8055321011050430748LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)4227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 184964328578192306LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-27360;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)34506;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 11181432948697575293ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)56495;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)14428;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 10048216536308268536ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-31985;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 18261514989042677764ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-13097;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
