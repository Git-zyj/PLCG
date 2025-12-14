#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9415209882209234798ULL;
unsigned char var_1 = (unsigned char)188;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)28508;
_Bool var_4 = (_Bool)1;
int var_5 = -122555497;
unsigned long long int var_11 = 13376995230997436620ULL;
short var_12 = (short)1136;
long long int var_14 = -6371083963138470001LL;
unsigned short var_16 = (unsigned short)60065;
int zero = 0;
unsigned short var_17 = (unsigned short)46851;
unsigned long long int var_18 = 8074009136052875530ULL;
short var_19 = (short)25602;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2050138936U;
signed char var_22 = (signed char)80;
short var_23 = (short)26731;
signed char arr_8 [18] [18] [18] ;
unsigned short arr_9 [18] ;
unsigned short arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34507 : (unsigned short)4576;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)10451 : (unsigned short)27026;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
