#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2186243753U;
int var_2 = -164404713;
unsigned int var_3 = 1021334201U;
int var_6 = -1999567732;
unsigned int var_7 = 2878370252U;
unsigned int var_10 = 3514516336U;
unsigned long long int var_11 = 2537977002613165260ULL;
int zero = 0;
long long int var_12 = -7614948608293907600LL;
signed char var_13 = (signed char)-5;
long long int var_14 = 4511441993068491597LL;
unsigned int var_15 = 4111329854U;
unsigned short var_16 = (unsigned short)22743;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 157298262U;
unsigned long long int var_19 = 397859671212006460ULL;
int var_20 = 1216286536;
short var_21 = (short)-1017;
short arr_4 [22] [22] [22] ;
unsigned int arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] ;
short arr_8 [22] ;
unsigned short arr_12 [23] ;
_Bool arr_13 [23] [23] ;
unsigned char arr_18 [23] [23] [23] ;
int arr_19 [23] ;
unsigned short arr_21 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)15816 : (short)6449;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2000889607U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)32354 : (short)-30243;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)58419;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)250 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 1029998404;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)57040 : (unsigned short)27308;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
