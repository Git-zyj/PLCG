#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4144;
long long int var_1 = 7693755530107964265LL;
short var_8 = (short)15532;
signed char var_9 = (signed char)109;
long long int var_14 = -8966162854095160292LL;
short var_17 = (short)16809;
int zero = 0;
long long int var_18 = -639254539551665956LL;
short var_19 = (short)-4859;
unsigned char var_20 = (unsigned char)235;
unsigned int var_21 = 99063419U;
short var_22 = (short)-5017;
signed char var_23 = (signed char)-101;
unsigned int var_24 = 2447835989U;
long long int var_25 = 7707554312830327577LL;
unsigned short var_26 = (unsigned short)35053;
short var_27 = (short)30530;
unsigned int var_28 = 1486987060U;
signed char var_29 = (signed char)50;
unsigned short arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
int arr_2 [13] ;
unsigned char arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
unsigned short arr_8 [22] [22] ;
int arr_9 [22] [22] [22] ;
unsigned char arr_10 [22] [22] ;
int arr_12 [22] ;
int arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)50125;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 178146533U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 976352859;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)27106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 39905723;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -306140227;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -1965883226;
}

void checksum() {
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
