#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
long long int var_2 = 6500776240043975624LL;
unsigned char var_3 = (unsigned char)60;
signed char var_5 = (signed char)51;
unsigned short var_6 = (unsigned short)9641;
unsigned char var_9 = (unsigned char)73;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2141244986U;
int var_12 = -1343547327;
signed char var_16 = (signed char)-1;
int zero = 0;
unsigned long long int var_18 = 8671372790367120048ULL;
unsigned char var_19 = (unsigned char)63;
_Bool var_20 = (_Bool)0;
long long int var_21 = -535908294814812493LL;
unsigned int var_22 = 3417889362U;
unsigned short var_23 = (unsigned short)31472;
unsigned char var_24 = (unsigned char)177;
unsigned int var_25 = 1296734244U;
unsigned char var_26 = (unsigned char)104;
int var_27 = -562364640;
unsigned int var_28 = 3655533011U;
long long int var_29 = 8440230299991973447LL;
unsigned char var_30 = (unsigned char)224;
short var_31 = (short)-27053;
unsigned short arr_0 [10] [10] ;
_Bool arr_1 [10] [10] ;
long long int arr_2 [17] ;
unsigned short arr_3 [17] ;
_Bool arr_6 [17] ;
short arr_7 [17] [17] [17] ;
int arr_9 [17] [17] ;
long long int arr_12 [17] [17] [17] ;
unsigned char arr_15 [17] [17] [17] [17] ;
unsigned char arr_16 [17] [17] [17] [17] [17] [17] ;
long long int arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)9544 : (unsigned short)42195;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2670935876036763598LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5360 : (unsigned short)2572;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)8977;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 1787259006;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6823570820266467506LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = -9147593502748118085LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
