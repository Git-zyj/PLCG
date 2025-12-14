#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23982;
signed char var_1 = (signed char)-106;
_Bool var_5 = (_Bool)1;
short var_8 = (short)20579;
long long int var_11 = 410704235260228899LL;
signed char var_12 = (signed char)-111;
signed char var_13 = (signed char)-101;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)47252;
unsigned long long int var_16 = 1239298677852495575ULL;
long long int var_18 = -5604671036623724444LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 8519711595013215810LL;
long long int var_21 = -4922996056953375321LL;
short var_22 = (short)17764;
unsigned short var_23 = (unsigned short)12084;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-6;
unsigned short var_26 = (unsigned short)54606;
short var_27 = (short)-16634;
unsigned int var_28 = 4136157590U;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)54935;
signed char var_31 = (signed char)6;
short var_32 = (short)-13565;
signed char var_33 = (signed char)-93;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)46731;
long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned char arr_4 [23] ;
unsigned char arr_5 [23] ;
unsigned char arr_6 [23] ;
signed char arr_8 [23] ;
long long int arr_11 [23] [23] [23] [23] ;
unsigned char arr_17 [23] [23] [23] [23] ;
long long int arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned int arr_21 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -27261156158478365LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1435202498120470669LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 991968344415333008LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1551842541U : 1958675398U;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
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
