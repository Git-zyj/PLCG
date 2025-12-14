#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6087790249940944658ULL;
unsigned long long int var_1 = 15893515646401938209ULL;
unsigned char var_2 = (unsigned char)252;
unsigned long long int var_4 = 1322706264806850260ULL;
unsigned int var_8 = 3033143555U;
unsigned long long int var_9 = 1707782084004182850ULL;
unsigned long long int var_10 = 7696488904427053447ULL;
long long int var_11 = 8837778326640245647LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)24425;
unsigned char var_14 = (unsigned char)176;
unsigned long long int var_15 = 956860816666306288ULL;
signed char var_16 = (signed char)48;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
long long int var_18 = -7153384943196944452LL;
unsigned short var_19 = (unsigned short)5378;
int var_20 = -957313696;
unsigned short var_21 = (unsigned short)43418;
short var_22 = (short)29261;
long long int var_23 = 2884739930234215109LL;
long long int var_24 = 7126885340117439460LL;
signed char var_25 = (signed char)36;
signed char arr_0 [23] [23] ;
long long int arr_1 [23] [23] ;
unsigned char arr_2 [23] [23] [23] ;
int arr_3 [23] ;
signed char arr_4 [23] ;
long long int arr_5 [23] [23] [23] [23] ;
_Bool arr_6 [23] [23] [23] [23] ;
_Bool arr_13 [19] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 6333133394477278817LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -111289439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3122640078949814124LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10631020983571932124ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
