#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)145;
short var_5 = (short)10348;
unsigned short var_6 = (unsigned short)55114;
unsigned short var_7 = (unsigned short)1764;
unsigned int var_8 = 2248711049U;
int var_9 = -308063088;
unsigned char var_12 = (unsigned char)28;
short var_13 = (short)-19777;
int zero = 0;
signed char var_15 = (signed char)-60;
unsigned short var_16 = (unsigned short)1854;
unsigned short var_17 = (unsigned short)8707;
unsigned short var_18 = (unsigned short)33527;
long long int var_19 = 5091310873382914478LL;
short var_20 = (short)-22232;
unsigned long long int var_21 = 3848869582633192915ULL;
unsigned long long int var_22 = 765467970426997543ULL;
short var_23 = (short)-9163;
_Bool var_24 = (_Bool)0;
int var_25 = 1021791742;
signed char var_26 = (signed char)-32;
unsigned long long int var_27 = 5385423621548184695ULL;
signed char var_28 = (signed char)-5;
short arr_3 [10] [10] ;
unsigned char arr_6 [20] ;
long long int arr_8 [15] [15] ;
short arr_9 [15] ;
unsigned short arr_10 [15] ;
short arr_4 [10] [10] ;
unsigned char arr_12 [15] ;
short arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)21353;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -2291705358885500540LL : -5394785022804458340LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)-30913;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)31125;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-23941;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)140 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-31049 : (short)8346;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
