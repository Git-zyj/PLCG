#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-4;
unsigned int var_5 = 2405042026U;
unsigned char var_6 = (unsigned char)26;
unsigned long long int var_8 = 7300440726680323046ULL;
unsigned short var_9 = (unsigned short)40713;
unsigned short var_10 = (unsigned short)27757;
unsigned short var_11 = (unsigned short)12152;
unsigned int var_13 = 1401396721U;
unsigned short var_14 = (unsigned short)34981;
int zero = 0;
unsigned short var_17 = (unsigned short)43969;
unsigned char var_18 = (unsigned char)234;
unsigned char var_19 = (unsigned char)207;
signed char var_20 = (signed char)18;
unsigned long long int var_21 = 8723461478854699503ULL;
unsigned int var_22 = 3671158180U;
unsigned char var_23 = (unsigned char)206;
unsigned short var_24 = (unsigned short)5402;
unsigned short var_25 = (unsigned short)38972;
unsigned long long int var_26 = 1644139165835941486ULL;
signed char var_27 = (signed char)109;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
signed char arr_2 [22] ;
unsigned char arr_3 [22] ;
unsigned short arr_6 [22] [22] [22] ;
unsigned int arr_8 [22] [22] ;
unsigned int arr_9 [22] [22] ;
unsigned char arr_10 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 824063982U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2386083524U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)59675;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 4058231294U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 2228568567U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)213;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
