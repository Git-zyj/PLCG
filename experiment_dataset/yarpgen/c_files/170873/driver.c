#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
int var_4 = 1252890056;
unsigned long long int var_5 = 5244278132776176285ULL;
short var_9 = (short)18175;
signed char var_11 = (signed char)69;
unsigned int var_14 = 3444746851U;
long long int var_15 = 1771264465239771529LL;
int zero = 0;
unsigned long long int var_17 = 8476176243023421578ULL;
unsigned long long int var_18 = 242440784642496209ULL;
signed char var_19 = (signed char)-118;
signed char var_20 = (signed char)-61;
int var_21 = 1639369765;
signed char var_22 = (signed char)-22;
unsigned short var_23 = (unsigned short)8280;
signed char var_24 = (signed char)3;
int arr_0 [22] [22] ;
unsigned short arr_2 [22] [22] [22] ;
int arr_3 [22] ;
signed char arr_4 [22] [22] [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] [22] ;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -2025274784;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)38635 : (unsigned short)27079;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -212110868;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 710659641548513645ULL : 17846936268059502856ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)10508;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
