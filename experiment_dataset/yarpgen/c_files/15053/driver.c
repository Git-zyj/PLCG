#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5270960571416579690ULL;
signed char var_2 = (signed char)-90;
int var_3 = -893901166;
signed char var_4 = (signed char)-97;
unsigned long long int var_5 = 4342058609121721317ULL;
unsigned short var_6 = (unsigned short)12375;
int var_7 = -503022159;
unsigned short var_9 = (unsigned short)5305;
int zero = 0;
unsigned long long int var_10 = 3640435888150375105ULL;
unsigned long long int var_11 = 863732692493759692ULL;
short var_12 = (short)1555;
short var_13 = (short)20258;
unsigned long long int var_14 = 1618137741102088157ULL;
unsigned long long int var_15 = 7927785616388637890ULL;
unsigned short var_16 = (unsigned short)31067;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_7 [17] [17] ;
unsigned short arr_8 [17] [17] ;
short arr_12 [17] ;
unsigned short arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 9343194623304877999ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)12546;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (short)-12609;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)37958;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
