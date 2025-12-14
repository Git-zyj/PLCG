#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned long long int var_1 = 13034883256293060084ULL;
unsigned short var_3 = (unsigned short)34606;
unsigned int var_4 = 495214848U;
unsigned int var_7 = 4015617287U;
unsigned int var_9 = 826686008U;
unsigned int var_10 = 1071447535U;
long long int var_14 = 468008760481308415LL;
int zero = 0;
short var_15 = (short)8730;
short var_16 = (short)-27680;
short var_17 = (short)-30733;
int var_18 = -1000855552;
short var_19 = (short)-15021;
int var_20 = 802987762;
short var_21 = (short)-9218;
_Bool arr_1 [22] ;
_Bool arr_2 [22] ;
short arr_4 [22] [22] [22] ;
int arr_5 [22] [22] [22] ;
int arr_7 [16] ;
long long int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-10365;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -935844187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = -1798246881;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2486464659972633559LL : -5634512290970448811LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
