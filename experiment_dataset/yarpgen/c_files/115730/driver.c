#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33035;
unsigned char var_5 = (unsigned char)35;
unsigned int var_7 = 3183289475U;
unsigned char var_8 = (unsigned char)135;
unsigned long long int var_10 = 18178938583397606450ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)99;
int var_14 = -1859718120;
unsigned char var_15 = (unsigned char)106;
unsigned int var_16 = 1452450995U;
long long int var_17 = 2409842219661628009LL;
long long int var_18 = -6851426939683911194LL;
signed char var_19 = (signed char)51;
int var_20 = 924344453;
int var_21 = 1272208071;
unsigned char var_22 = (unsigned char)112;
int var_23 = -1433427798;
long long int arr_0 [10] ;
_Bool arr_2 [10] ;
signed char arr_5 [21] ;
unsigned long long int arr_6 [21] [21] ;
unsigned char arr_9 [18] ;
signed char arr_12 [18] [18] [18] ;
int arr_13 [18] ;
unsigned int arr_17 [18] ;
_Bool arr_4 [10] [10] ;
unsigned short arr_14 [18] ;
unsigned char arr_15 [18] [18] ;
unsigned long long int arr_16 [18] [18] [18] ;
long long int arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1340472671880138080LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 18030039061303650943ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -1281977339;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 1346903187U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)32807;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 8089092657509677891ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3768790664422394863LL : -223071397538765838LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
