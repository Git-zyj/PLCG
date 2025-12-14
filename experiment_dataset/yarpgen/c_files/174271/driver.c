#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1527972428307544411LL;
unsigned int var_2 = 1458527341U;
unsigned int var_3 = 2204240271U;
unsigned short var_5 = (unsigned short)41934;
short var_6 = (short)-3583;
unsigned char var_7 = (unsigned char)129;
int var_10 = -61112343;
int zero = 0;
long long int var_11 = -1256074283329007989LL;
unsigned int var_12 = 420953028U;
short var_13 = (short)19559;
int var_14 = -378016165;
signed char var_15 = (signed char)-88;
int var_16 = -259254908;
unsigned char var_17 = (unsigned char)184;
int var_18 = 773270139;
short var_19 = (short)27404;
unsigned short var_20 = (unsigned short)41212;
unsigned short var_21 = (unsigned short)31581;
unsigned short var_22 = (unsigned short)14477;
unsigned long long int var_23 = 2650572776318945942ULL;
int var_24 = 980819885;
unsigned short arr_0 [23] [23] ;
short arr_2 [23] [23] [23] ;
unsigned int arr_3 [23] [23] ;
long long int arr_6 [23] ;
unsigned char arr_7 [23] [23] ;
short arr_8 [23] [23] [23] ;
unsigned short arr_9 [23] [23] ;
short arr_10 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)41898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-9950;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3594685491U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -3922667413404433876LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-5645 : (short)9724;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37924 : (unsigned short)37627;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)20948;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
