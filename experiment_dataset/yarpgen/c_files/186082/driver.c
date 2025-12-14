#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
signed char var_2 = (signed char)81;
unsigned long long int var_3 = 16639941317309288277ULL;
unsigned long long int var_4 = 2483592138649376132ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -1605786711;
signed char var_9 = (signed char)114;
short var_10 = (short)-21119;
unsigned int var_13 = 4015469378U;
unsigned long long int var_16 = 5116730819848702360ULL;
long long int var_17 = -2747370499922373423LL;
int zero = 0;
long long int var_18 = -3033963273427508113LL;
signed char var_19 = (signed char)62;
unsigned int var_20 = 2759773890U;
unsigned long long int var_21 = 10304321683220869402ULL;
unsigned char var_22 = (unsigned char)72;
signed char var_23 = (signed char)48;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 7835045179873366884ULL;
signed char var_26 = (signed char)-90;
unsigned char var_27 = (unsigned char)9;
signed char var_28 = (signed char)-19;
unsigned long long int var_29 = 976558185017021267ULL;
unsigned char var_30 = (unsigned char)141;
unsigned char var_31 = (unsigned char)9;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] [23] ;
_Bool arr_4 [23] [23] ;
unsigned int arr_7 [23] [23] [23] ;
unsigned int arr_9 [23] ;
_Bool arr_13 [10] [10] ;
short arr_5 [23] ;
long long int arr_6 [23] ;
signed char arr_10 [23] [23] ;
unsigned char arr_11 [23] [23] ;
signed char arr_20 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4049496619U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1339044794U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 798898059U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 942475230U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3744528142U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-17891;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -3191353146240387624LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)63 : (signed char)-56;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
