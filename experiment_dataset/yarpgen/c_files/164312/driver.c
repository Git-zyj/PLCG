#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2300;
signed char var_3 = (signed char)-63;
long long int var_4 = -3971896515068079304LL;
unsigned short var_6 = (unsigned short)46158;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1644222168U;
signed char var_10 = (signed char)114;
unsigned long long int var_11 = 15011599192363419996ULL;
unsigned char var_12 = (unsigned char)204;
signed char var_13 = (signed char)-8;
long long int var_15 = -5667430539540542760LL;
int zero = 0;
signed char var_17 = (signed char)48;
signed char var_18 = (signed char)-78;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)99;
short var_22 = (short)-22075;
unsigned long long int var_23 = 5451324155847718814ULL;
unsigned long long int arr_6 [24] [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 2104840957377761155ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -2585832828555660310LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
