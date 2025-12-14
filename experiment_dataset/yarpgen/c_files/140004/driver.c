#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5026170647372709776ULL;
unsigned long long int var_2 = 12649824089204167572ULL;
long long int var_5 = -6324813625811901106LL;
unsigned short var_6 = (unsigned short)40777;
unsigned short var_7 = (unsigned short)33733;
long long int var_9 = -7425212639715734096LL;
unsigned long long int var_10 = 5759900482957936976ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)15254;
int zero = 0;
signed char var_13 = (signed char)70;
unsigned short var_14 = (unsigned short)64111;
unsigned short var_15 = (unsigned short)578;
unsigned long long int var_16 = 13268560026735411300ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-50;
short var_19 = (short)-9848;
unsigned int var_20 = 1572471428U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4040261127U;
signed char var_23 = (signed char)29;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
short arr_9 [17] [17] [17] [17] [17] [17] ;
_Bool arr_15 [17] [17] [17] [17] [17] ;
short arr_16 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 9927103637130136508ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 252817298386308157ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)-16780 : (short)-27365;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)-9133;
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
