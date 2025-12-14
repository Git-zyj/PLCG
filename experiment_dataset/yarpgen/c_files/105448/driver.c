#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32129;
int var_1 = 454479944;
unsigned char var_2 = (unsigned char)66;
unsigned short var_5 = (unsigned short)34925;
signed char var_8 = (signed char)67;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-29086;
int var_11 = 372411536;
unsigned int var_12 = 2628393415U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3862455715933104694LL;
signed char var_18 = (signed char)107;
short var_19 = (short)28076;
short var_20 = (short)-20075;
short var_21 = (short)-26896;
unsigned short var_22 = (unsigned short)12196;
unsigned short var_23 = (unsigned short)12732;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)32;
unsigned int var_26 = 868353942U;
_Bool var_27 = (_Bool)0;
signed char arr_0 [10] ;
signed char arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
unsigned short arr_3 [10] ;
signed char arr_5 [10] [10] [10] ;
signed char arr_8 [10] [10] [10] ;
_Bool arr_4 [10] ;
_Bool arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)108 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)14674;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)45758;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)124 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
