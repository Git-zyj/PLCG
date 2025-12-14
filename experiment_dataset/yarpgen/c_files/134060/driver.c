#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2060533713U;
unsigned char var_1 = (unsigned char)44;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)91;
unsigned long long int var_4 = 2860333757694558673ULL;
unsigned char var_5 = (unsigned char)173;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)107;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)13;
unsigned int var_11 = 2815183196U;
unsigned char var_12 = (unsigned char)64;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 418990259U;
unsigned int var_16 = 3172821497U;
unsigned short var_17 = (unsigned short)57247;
unsigned int var_18 = 1362883042U;
unsigned int var_19 = 4084944409U;
signed char var_20 = (signed char)56;
short var_21 = (short)-9939;
signed char var_22 = (signed char)-83;
long long int var_23 = -6277587135693332273LL;
int var_24 = -2142839127;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] ;
long long int arr_6 [24] ;
_Bool arr_7 [24] ;
signed char arr_8 [24] ;
long long int arr_9 [24] ;
unsigned int arr_11 [24] [24] [24] [24] ;
unsigned int arr_12 [24] [24] [24] [24] ;
long long int arr_13 [24] [24] [24] [24] [24] [24] ;
short arr_16 [23] [23] ;
unsigned long long int arr_17 [16] ;
short arr_18 [16] [16] ;
unsigned int arr_4 [23] ;
unsigned int arr_5 [23] [23] ;
long long int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2615948246U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)1038;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3046477392U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3523232546U : 70543634U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 6841086290244949984LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -1905021836634988435LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3745152974U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3557713897U : 2840027029U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3094246333903538513LL : -3112001123865359776LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-23317;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 3475457800217863870ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (short)12603;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3660487534U : 1148568178U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 205149177U : 1429927997U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -4234154324339411130LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
