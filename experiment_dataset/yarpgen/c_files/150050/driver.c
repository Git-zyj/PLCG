#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5683202370632907425ULL;
unsigned long long int var_8 = 16215071688859936097ULL;
unsigned int var_9 = 335844123U;
int zero = 0;
int var_13 = 1228475045;
unsigned long long int var_14 = 4734921933102127929ULL;
unsigned char var_15 = (unsigned char)100;
unsigned int var_16 = 579676830U;
unsigned long long int var_17 = 3378817274974625914ULL;
unsigned char var_18 = (unsigned char)164;
int var_19 = 1358915583;
unsigned int var_20 = 116174839U;
int var_21 = 761553342;
short var_22 = (short)30927;
_Bool arr_0 [21] ;
int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned char arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -104685821;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3474271789196967689ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)86;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
