#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 200636429;
int var_2 = -1739571158;
unsigned short var_4 = (unsigned short)33018;
short var_5 = (short)-26995;
unsigned short var_6 = (unsigned short)36177;
short var_7 = (short)-14931;
unsigned long long int var_8 = 9580442797244782555ULL;
int var_9 = 1431412697;
int var_10 = -1116334174;
unsigned int var_11 = 1027271118U;
signed char var_12 = (signed char)-108;
short var_13 = (short)-4350;
int var_14 = -1957602860;
int var_16 = 124350242;
signed char var_17 = (signed char)-52;
int zero = 0;
int var_19 = 865125740;
unsigned int var_20 = 1776749212U;
int var_21 = 2118399627;
short var_22 = (short)32402;
int arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
signed char arr_2 [12] [12] [12] ;
short arr_3 [12] [12] ;
_Bool arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1923751321;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 246508674U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)3452;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
