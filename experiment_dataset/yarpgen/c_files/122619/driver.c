#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2397514938U;
unsigned short var_1 = (unsigned short)793;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 4861787958867144595ULL;
unsigned short var_5 = (unsigned short)63963;
unsigned long long int var_6 = 16486521258396213267ULL;
unsigned int var_7 = 551976447U;
unsigned long long int var_9 = 9378183786685515312ULL;
unsigned int var_12 = 2300405602U;
signed char var_13 = (signed char)47;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)65478;
unsigned char var_16 = (unsigned char)88;
unsigned long long int var_17 = 11085000696723606063ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7721336089651036849LL;
unsigned long long int var_22 = 904873188797340123ULL;
short var_23 = (short)8434;
unsigned int var_24 = 1226633342U;
unsigned short var_25 = (unsigned short)13281;
unsigned int arr_1 [22] [22] ;
unsigned long long int arr_2 [22] [22] ;
int arr_3 [22] [22] ;
_Bool arr_5 [22] ;
long long int arr_8 [22] [22] [22] ;
unsigned long long int arr_15 [22] ;
unsigned short arr_16 [22] ;
short arr_6 [22] [22] ;
int arr_7 [22] ;
short arr_11 [22] ;
long long int arr_12 [22] [22] [22] ;
unsigned char arr_13 [22] ;
signed char arr_14 [22] ;
unsigned long long int arr_20 [22] [22] [22] ;
unsigned int arr_21 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2571574794U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 9403444295355855112ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1696925375;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8497894188989139138LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 4311027555941035623ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18712 : (unsigned short)50524;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)16747;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1616165172;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)22243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 8448477918206598878LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9399785804301825165ULL : 6727477749333857323ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1992198414U : 2893088227U;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
