#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
unsigned int var_5 = 3176610274U;
unsigned char var_7 = (unsigned char)31;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3262234946U;
unsigned long long int var_13 = 517534330498206727ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 965718152244998263LL;
unsigned short var_18 = (unsigned short)6375;
int zero = 0;
int var_19 = -93492419;
unsigned long long int var_20 = 9315883416947690304ULL;
long long int var_21 = 7362812410455411876LL;
signed char var_22 = (signed char)-86;
unsigned char var_23 = (unsigned char)89;
unsigned short arr_0 [10] ;
_Bool arr_2 [10] ;
unsigned int arr_6 [10] [10] ;
short arr_9 [10] [10] ;
unsigned char arr_3 [10] ;
unsigned short arr_7 [10] ;
unsigned long long int arr_10 [10] ;
signed char arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)3729;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 2450492551U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-14194;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21587 : (unsigned short)33855;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 4230514099725639600ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-54;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
