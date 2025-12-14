#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)6618;
unsigned short var_3 = (unsigned short)9237;
int var_5 = 1553338445;
unsigned short var_6 = (unsigned short)63659;
signed char var_7 = (signed char)-8;
_Bool var_8 = (_Bool)0;
int var_9 = -290926969;
long long int var_10 = -915688373483131569LL;
int zero = 0;
short var_11 = (short)-31825;
unsigned long long int var_12 = 9165335447945328481ULL;
long long int var_13 = 1119960989938650708LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-38;
int arr_1 [12] ;
long long int arr_2 [12] ;
short arr_3 [12] [12] ;
signed char arr_6 [12] [12] [12] ;
signed char arr_8 [12] ;
unsigned short arr_12 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -697974280;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -2573184674036542063LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)7801;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)646;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
