#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)77;
unsigned long long int var_3 = 7948737527277649563ULL;
unsigned short var_8 = (unsigned short)60912;
unsigned long long int var_11 = 16546009891695487372ULL;
unsigned long long int var_13 = 1539397858544874398ULL;
unsigned short var_14 = (unsigned short)23705;
int zero = 0;
long long int var_16 = 3639894810504020294LL;
unsigned short var_17 = (unsigned short)52537;
signed char var_18 = (signed char)-90;
unsigned long long int var_19 = 5724576154525851401ULL;
unsigned short var_20 = (unsigned short)52232;
int arr_0 [20] ;
long long int arr_1 [20] ;
long long int arr_3 [10] ;
unsigned long long int arr_6 [10] [10] ;
int arr_7 [10] [10] [10] ;
signed char arr_8 [10] ;
short arr_9 [10] ;
signed char arr_12 [21] ;
long long int arr_13 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 886478109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -2515743783257845459LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -4445273772465919867LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 15568369759447093452ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1642711141;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-3136;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 2280559677086872271LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
