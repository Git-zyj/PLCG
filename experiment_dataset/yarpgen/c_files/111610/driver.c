#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7908793849706519236LL;
unsigned short var_1 = (unsigned short)34516;
int var_2 = 85207801;
unsigned short var_4 = (unsigned short)14042;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 521178133U;
unsigned int var_10 = 1682930863U;
int var_12 = 941319314;
unsigned short var_13 = (unsigned short)26208;
unsigned short var_15 = (unsigned short)41419;
unsigned int var_17 = 1708093162U;
long long int var_18 = 1674796575023696720LL;
short var_19 = (short)-17052;
int zero = 0;
unsigned short var_20 = (unsigned short)49235;
unsigned long long int var_21 = 5770629253107329462ULL;
signed char var_22 = (signed char)-108;
unsigned short var_23 = (unsigned short)34605;
signed char var_24 = (signed char)-38;
signed char var_25 = (signed char)92;
int var_26 = -3185717;
long long int var_27 = 7309565019445486737LL;
signed char var_28 = (signed char)-115;
unsigned short var_29 = (unsigned short)12284;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)16564;
unsigned long long int var_32 = 993410152109423301ULL;
_Bool var_33 = (_Bool)1;
short arr_1 [23] ;
_Bool arr_2 [23] [23] ;
unsigned char arr_3 [23] [23] ;
signed char arr_4 [23] [23] ;
unsigned int arr_5 [23] ;
unsigned int arr_7 [23] ;
signed char arr_8 [23] [23] [23] [23] ;
_Bool arr_11 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)14306;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1305995636U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2785113048U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
