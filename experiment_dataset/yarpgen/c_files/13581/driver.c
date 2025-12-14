#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7460;
short var_3 = (short)-31198;
unsigned short var_6 = (unsigned short)45271;
short var_8 = (short)-30129;
unsigned short var_9 = (unsigned short)49466;
unsigned char var_10 = (unsigned char)154;
int var_11 = -355828909;
unsigned short var_12 = (unsigned short)4157;
short var_15 = (short)-21304;
int zero = 0;
unsigned long long int var_17 = 9884201612831248152ULL;
signed char var_18 = (signed char)106;
unsigned short var_19 = (unsigned short)6590;
long long int var_20 = -8541500006795128150LL;
signed char var_21 = (signed char)14;
unsigned char var_22 = (unsigned char)176;
_Bool arr_4 [12] ;
signed char arr_5 [12] [12] ;
unsigned int arr_7 [12] [12] [12] [12] ;
unsigned long long int arr_9 [22] ;
unsigned short arr_10 [22] [22] ;
long long int arr_11 [22] [22] ;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3692460629U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2750700735886997477ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56243 : (unsigned short)25087;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -666373985537288669LL : -6587641298567463516LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)12510;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
