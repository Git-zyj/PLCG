#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24047;
long long int var_1 = -1925333054936294044LL;
unsigned int var_2 = 4256274084U;
int var_3 = 728887516;
int var_5 = 2065848455;
signed char var_6 = (signed char)49;
int var_9 = -1253399381;
unsigned int var_10 = 3509037029U;
short var_11 = (short)13720;
unsigned char var_12 = (unsigned char)152;
signed char var_13 = (signed char)41;
_Bool var_15 = (_Bool)0;
short var_16 = (short)4039;
int zero = 0;
signed char var_17 = (signed char)-102;
long long int var_18 = -4160316443659371483LL;
long long int var_19 = -5515375814510019206LL;
signed char var_20 = (signed char)-90;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)82;
signed char arr_6 [15] [15] ;
short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-17690;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
