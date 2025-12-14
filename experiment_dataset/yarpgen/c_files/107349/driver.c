#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2130330681019619520ULL;
unsigned int var_1 = 2500632868U;
int var_2 = -122754354;
long long int var_3 = -4442419870103481992LL;
short var_4 = (short)4356;
long long int var_5 = 1701456352141625479LL;
unsigned short var_7 = (unsigned short)12743;
unsigned short var_8 = (unsigned short)49292;
unsigned int var_9 = 579110369U;
unsigned long long int var_10 = 12458877991413405126ULL;
unsigned int var_11 = 3142216840U;
unsigned long long int var_12 = 5081241944607479541ULL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6988353794531543466LL;
int zero = 0;
unsigned int var_15 = 1535321868U;
unsigned int var_16 = 3534685361U;
short var_17 = (short)-12807;
unsigned char var_18 = (unsigned char)185;
short var_19 = (short)-17700;
long long int var_20 = -6250292946695775134LL;
signed char arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
int arr_5 [11] ;
short arr_7 [11] [11] ;
short arr_4 [14] ;
unsigned long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)15759;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1863137993;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 4242155528U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = -2146887382;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-31108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)29421;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 15552751080816846914ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
