#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned int var_3 = 3422020336U;
unsigned int var_6 = 99913298U;
signed char var_7 = (signed char)-37;
unsigned int var_8 = 810609529U;
signed char var_11 = (signed char)1;
unsigned int var_13 = 1341994771U;
unsigned int var_14 = 1220618741U;
unsigned int var_15 = 2414645691U;
signed char var_16 = (signed char)3;
signed char var_17 = (signed char)-4;
int zero = 0;
unsigned int var_19 = 493089261U;
signed char var_20 = (signed char)9;
unsigned int var_21 = 1092608584U;
signed char var_22 = (signed char)-4;
signed char var_23 = (signed char)53;
signed char var_24 = (signed char)-78;
signed char var_25 = (signed char)-106;
signed char var_26 = (signed char)-122;
unsigned int var_27 = 2910730509U;
unsigned int arr_0 [18] [18] ;
signed char arr_1 [18] ;
signed char arr_2 [10] [10] ;
signed char arr_3 [10] ;
unsigned int arr_4 [10] ;
unsigned int arr_5 [10] [10] ;
signed char arr_6 [10] ;
signed char arr_8 [10] [10] [10] ;
unsigned int arr_9 [10] ;
signed char arr_7 [10] ;
signed char arr_10 [10] ;
unsigned int arr_11 [10] [10] [10] ;
unsigned int arr_14 [10] [10] [10] ;
unsigned int arr_15 [10] ;
unsigned int arr_16 [10] [10] ;
signed char arr_17 [10] ;
unsigned int arr_18 [10] ;
signed char arr_21 [10] ;
unsigned int arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 90759512U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2799583467U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 260828858U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 2267546214U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 992621701U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 126262672U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 750639994U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 3715939962U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 429126706U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 2725991422U : 3891597297U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
