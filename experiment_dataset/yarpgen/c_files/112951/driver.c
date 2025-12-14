#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1825345518;
unsigned int var_4 = 2527438340U;
unsigned char var_10 = (unsigned char)109;
unsigned int var_12 = 1571723751U;
unsigned short var_14 = (unsigned short)10263;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)91;
unsigned int var_22 = 1060814828U;
_Bool var_23 = (_Bool)1;
long long int var_24 = 5677687396582920700LL;
unsigned char var_25 = (unsigned char)253;
long long int var_26 = -7093598174340949070LL;
unsigned long long int var_27 = 7847634649707713921ULL;
unsigned int arr_7 [13] [13] [13] [13] ;
unsigned int arr_11 [18] ;
unsigned int arr_12 [18] ;
signed char arr_13 [18] ;
short arr_14 [18] [18] ;
short arr_15 [18] [18] [18] ;
unsigned long long int arr_16 [18] [18] [18] ;
unsigned short arr_19 [18] ;
signed char arr_10 [13] ;
unsigned int arr_18 [18] [18] [18] ;
_Bool arr_21 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3576387090U : 2862739146U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1553347125U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 4015729129U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (short)26964;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-20996;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 15402706832730852104ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)25609;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3637563858U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
