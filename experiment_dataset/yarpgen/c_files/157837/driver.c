#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 367771198U;
unsigned int var_4 = 734432506U;
unsigned char var_6 = (unsigned char)189;
unsigned short var_7 = (unsigned short)20224;
int var_10 = 852302304;
short var_13 = (short)-4223;
int var_14 = 706639683;
short var_15 = (short)-15338;
unsigned long long int var_16 = 15794129473173250717ULL;
long long int var_17 = -1528367931462707240LL;
unsigned long long int var_18 = 8542154151246618650ULL;
int zero = 0;
long long int var_19 = -1002501857578804657LL;
int var_20 = -1863248979;
signed char var_21 = (signed char)-9;
signed char var_22 = (signed char)-108;
unsigned short var_23 = (unsigned short)22941;
short var_24 = (short)11304;
unsigned int var_25 = 964830690U;
unsigned short var_26 = (unsigned short)42175;
unsigned int var_27 = 3141163145U;
short var_28 = (short)-4996;
unsigned short var_29 = (unsigned short)56328;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
short arr_2 [23] ;
int arr_3 [23] ;
_Bool arr_5 [22] ;
short arr_7 [22] [22] ;
_Bool arr_8 [22] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2352117775869684763ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -167611770;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-23842;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -2015691742;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)7482;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1040727308402176370LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
