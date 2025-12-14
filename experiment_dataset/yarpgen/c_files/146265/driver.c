#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned char var_1 = (unsigned char)145;
unsigned long long int var_2 = 2417514849634974056ULL;
_Bool var_3 = (_Bool)0;
int var_6 = -1905281601;
signed char var_7 = (signed char)0;
signed char var_8 = (signed char)8;
unsigned int var_9 = 1295645995U;
long long int var_10 = -2092646925889666057LL;
short var_11 = (short)7265;
short var_13 = (short)-20921;
unsigned char var_14 = (unsigned char)7;
unsigned char var_15 = (unsigned char)55;
int zero = 0;
short var_17 = (short)32339;
int var_18 = 2142859867;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1460419921U;
long long int var_21 = 6457170259427729020LL;
short var_22 = (short)31387;
unsigned char var_23 = (unsigned char)108;
long long int arr_0 [23] ;
long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
int arr_5 [23] [23] [23] ;
_Bool arr_6 [23] [23] ;
int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 92678932166960203LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -5585595183348378883LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)6410;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)22708;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 740642198;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 1833529530;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
