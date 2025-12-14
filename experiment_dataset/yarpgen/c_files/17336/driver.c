#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 8513134U;
unsigned short var_1 = (unsigned short)60303;
unsigned int var_3 = 2193445587U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4213804229U;
long long int var_6 = -3283511941974387172LL;
short var_7 = (short)-25472;
unsigned int var_8 = 2466948557U;
long long int var_10 = -3242452828254031220LL;
unsigned char var_15 = (unsigned char)134;
short var_16 = (short)-32255;
unsigned int var_17 = 404823050U;
unsigned int var_18 = 1578407288U;
int zero = 0;
unsigned long long int var_19 = 617768503399490955ULL;
signed char var_20 = (signed char)76;
long long int var_21 = 5399193962033049556LL;
unsigned short var_22 = (unsigned short)27811;
unsigned long long int var_23 = 5473178979334052819ULL;
unsigned short var_24 = (unsigned short)25678;
unsigned int var_25 = 2806009161U;
unsigned short var_26 = (unsigned short)60634;
signed char var_27 = (signed char)-92;
unsigned int var_28 = 430873312U;
unsigned short var_29 = (unsigned short)10899;
signed char var_30 = (signed char)-57;
long long int var_31 = -7658727934770463LL;
signed char var_32 = (signed char)78;
unsigned int var_33 = 2629873350U;
int var_34 = -286615068;
long long int arr_1 [17] ;
unsigned char arr_3 [12] ;
long long int arr_4 [12] ;
unsigned long long int arr_12 [12] [12] [12] ;
unsigned int arr_15 [23] [23] ;
unsigned int arr_16 [23] ;
_Bool arr_10 [12] [12] ;
long long int arr_14 [12] [12] ;
unsigned int arr_17 [23] ;
int arr_23 [10] ;
unsigned char arr_26 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8134209874873099379LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1416499326730506688LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 15238497716352044069ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 2366369751U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 2307706636U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 4086146026697107753LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 1342863079U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = -1271626550;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned char)55;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
