#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61202;
unsigned long long int var_6 = 301728608246479874ULL;
short var_7 = (short)-18297;
short var_9 = (short)14350;
unsigned long long int var_10 = 369551553115712271ULL;
short var_15 = (short)-18061;
signed char var_16 = (signed char)-34;
int var_17 = 1704197901;
int zero = 0;
unsigned short var_19 = (unsigned short)33279;
int var_20 = 775757683;
long long int var_21 = -4210546577839504877LL;
unsigned short var_22 = (unsigned short)43403;
short var_23 = (short)-13641;
short var_24 = (short)29243;
signed char var_25 = (signed char)89;
unsigned long long int var_26 = 6147327087513992642ULL;
signed char arr_0 [14] ;
signed char arr_1 [14] ;
short arr_5 [14] [14] [14] ;
signed char arr_8 [14] [14] [14] ;
unsigned char arr_9 [14] ;
short arr_12 [14] ;
signed char arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)5757;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (short)1108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-117 : (signed char)-38;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
