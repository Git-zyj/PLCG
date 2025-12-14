#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 875840939;
unsigned long long int var_2 = 4723531426775866776ULL;
signed char var_3 = (signed char)11;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1916506833U;
unsigned char var_7 = (unsigned char)163;
unsigned long long int var_8 = 3079096460010927486ULL;
signed char var_9 = (signed char)-90;
unsigned int var_11 = 779647384U;
unsigned int var_12 = 754868146U;
long long int var_13 = 6180214383577042220LL;
unsigned long long int var_14 = 8347889244601084101ULL;
short var_15 = (short)26856;
int var_16 = 1350029250;
int zero = 0;
unsigned int var_17 = 351838789U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int var_20 = -514938233;
unsigned char arr_0 [22] ;
unsigned char arr_1 [22] ;
int arr_2 [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 139290858;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 3348888653U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
