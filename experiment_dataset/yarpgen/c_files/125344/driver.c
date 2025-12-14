#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18949;
short var_1 = (short)-8230;
long long int var_2 = -1972489658249657036LL;
unsigned int var_3 = 304791821U;
long long int var_4 = -7095351521997124590LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5919980531563516049LL;
long long int var_7 = -7407015221031009708LL;
unsigned short var_8 = (unsigned short)5698;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 3769080615297032495ULL;
_Bool var_11 = (_Bool)0;
int var_12 = 1813585137;
unsigned char var_13 = (unsigned char)157;
long long int arr_0 [23] [23] ;
_Bool arr_1 [23] ;
unsigned int arr_3 [10] ;
long long int arr_4 [10] ;
unsigned short arr_5 [10] ;
int arr_2 [23] ;
short arr_10 [10] [10] [10] ;
long long int arr_11 [10] [10] [10] [10] ;
unsigned long long int arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 6314354557575850237LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3195828333U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7319360439474008427LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)7527;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 40870768;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)9544;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -3745742779221212366LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 3786282538281596524ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
