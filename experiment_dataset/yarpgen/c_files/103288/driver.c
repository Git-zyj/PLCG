#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned long long int var_2 = 653046071439084654ULL;
signed char var_3 = (signed char)-28;
unsigned long long int var_4 = 8126720931972948728ULL;
unsigned short var_6 = (unsigned short)48191;
unsigned long long int var_8 = 5966310678080241484ULL;
unsigned short var_9 = (unsigned short)22430;
signed char var_11 = (signed char)107;
unsigned long long int var_12 = 1859163414144528040ULL;
int zero = 0;
signed char var_14 = (signed char)-107;
unsigned short var_15 = (unsigned short)57069;
unsigned char var_16 = (unsigned char)79;
short var_17 = (short)22860;
unsigned int var_18 = 104800090U;
short var_19 = (short)13073;
unsigned long long int var_20 = 15718064007312134082ULL;
short var_21 = (short)-8575;
unsigned int var_22 = 957074203U;
_Bool var_23 = (_Bool)1;
_Bool arr_1 [21] ;
unsigned short arr_2 [18] ;
unsigned char arr_6 [23] ;
long long int arr_12 [23] [23] [23] [23] [23] ;
unsigned long long int arr_16 [23] ;
unsigned short arr_4 [18] [18] ;
unsigned short arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)9361;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -2013325370446974300LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 5359766131016087304ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)55534;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (unsigned short)50646;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
