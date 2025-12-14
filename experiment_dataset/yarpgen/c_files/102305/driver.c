#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -78426805;
unsigned short var_2 = (unsigned short)12343;
unsigned int var_3 = 11962052U;
unsigned char var_4 = (unsigned char)176;
unsigned int var_5 = 734230152U;
unsigned char var_6 = (unsigned char)240;
unsigned short var_8 = (unsigned short)37100;
unsigned long long int var_9 = 2627136037736710052ULL;
short var_10 = (short)29664;
unsigned int var_12 = 2752423647U;
short var_13 = (short)-31404;
unsigned short var_14 = (unsigned short)58793;
int zero = 0;
unsigned short var_15 = (unsigned short)35515;
signed char var_16 = (signed char)101;
unsigned int var_17 = 3809187257U;
long long int var_18 = -5898000044049147374LL;
signed char var_19 = (signed char)51;
short var_20 = (short)-9045;
signed char var_21 = (signed char)120;
unsigned char var_22 = (unsigned char)248;
unsigned short var_23 = (unsigned short)37827;
signed char arr_0 [22] ;
signed char arr_1 [22] ;
unsigned short arr_4 [22] [22] [22] ;
signed char arr_5 [22] [22] [22] ;
unsigned long long int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)63407;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 13977371279186802433ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
