#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2527;
unsigned int var_3 = 3435784168U;
unsigned short var_5 = (unsigned short)8831;
unsigned short var_8 = (unsigned short)19347;
short var_9 = (short)-26818;
short var_10 = (short)-13948;
unsigned short var_12 = (unsigned short)21254;
short var_13 = (short)-13896;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-14327;
int var_18 = 633411646;
int zero = 0;
unsigned long long int var_19 = 3266918614434226759ULL;
unsigned char var_20 = (unsigned char)94;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2774963120U;
signed char arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned short arr_3 [21] [21] [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 42417850699815230ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)4908;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 690131240;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
