#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 358438490006177445LL;
long long int var_1 = 211670903335092114LL;
signed char var_2 = (signed char)104;
unsigned short var_3 = (unsigned short)6291;
int var_4 = 106315890;
_Bool var_5 = (_Bool)0;
int var_6 = -614298560;
int var_7 = -90873878;
unsigned short var_8 = (unsigned short)64662;
long long int var_9 = -5465350169948648569LL;
int var_10 = -471973276;
int var_11 = -90182383;
unsigned int var_13 = 1438214210U;
long long int var_14 = 3888401424336644520LL;
signed char var_15 = (signed char)10;
int zero = 0;
short var_17 = (short)32282;
short var_18 = (short)30284;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8549194085945522317ULL;
int var_22 = -975120469;
short var_23 = (short)26234;
_Bool var_24 = (_Bool)0;
signed char arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
int arr_5 [16] [16] ;
unsigned int arr_9 [24] ;
unsigned int arr_10 [24] [24] ;
long long int arr_13 [15] [15] ;
int arr_15 [15] ;
long long int arr_21 [14] ;
signed char arr_23 [14] ;
unsigned char arr_2 [21] ;
int arr_6 [16] ;
_Bool arr_7 [16] [16] ;
int arr_8 [16] ;
int arr_11 [24] ;
unsigned int arr_12 [24] ;
unsigned short arr_17 [15] ;
int arr_18 [15] ;
signed char arr_28 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 690863344;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1313305304U : 2996831194U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 2405915096U : 3218122337U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 2350398894242851549LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = -651553514;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = -6728347722052243980LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)-9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2061820636;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -150812480;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -496028114 : -890908894;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 375862511U : 2467609768U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)44748;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = -706939637;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)56 : (signed char)70;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
