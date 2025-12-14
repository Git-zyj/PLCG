#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
short var_1 = (short)8251;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-26705;
unsigned char var_4 = (unsigned char)128;
unsigned char var_5 = (unsigned char)6;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)77;
int var_11 = -516705365;
int zero = 0;
unsigned short var_13 = (unsigned short)2018;
short var_14 = (short)19218;
long long int var_15 = -6575866634960241674LL;
unsigned long long int var_16 = 5184768231405246524ULL;
unsigned char var_17 = (unsigned char)255;
unsigned char var_18 = (unsigned char)219;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)100;
long long int arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
unsigned short arr_2 [11] [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -3127086015190011207LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33461;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8023114694220718105LL : -3102307873760108271LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
