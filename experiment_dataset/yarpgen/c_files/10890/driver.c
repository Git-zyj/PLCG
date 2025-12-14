#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
_Bool var_1 = (_Bool)1;
int var_2 = -2035389397;
unsigned int var_3 = 2539902500U;
unsigned long long int var_5 = 9879018230017212779ULL;
int var_6 = 770521460;
signed char var_7 = (signed char)124;
unsigned long long int var_8 = 15873522252284443133ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)1004;
unsigned long long int var_11 = 931129237835928825ULL;
short var_12 = (short)-24330;
int zero = 0;
unsigned long long int var_13 = 8326561156355267888ULL;
signed char var_14 = (signed char)-14;
unsigned int var_15 = 2697942369U;
unsigned int var_16 = 2083849884U;
signed char var_17 = (signed char)18;
unsigned long long int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned short arr_5 [11] ;
long long int arr_6 [11] ;
signed char arr_7 [11] ;
signed char arr_8 [17] [17] ;
int arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
_Bool arr_4 [11] ;
_Bool arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 14198967502662599808ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)9785;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -5428455763395569657LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -858486105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 967604218U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
