#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17869770111604367847ULL;
unsigned int var_5 = 3868041517U;
unsigned int var_6 = 2141675810U;
unsigned char var_9 = (unsigned char)14;
signed char var_10 = (signed char)-72;
signed char var_11 = (signed char)119;
int zero = 0;
unsigned long long int var_15 = 12093502008297125127ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-42;
int var_18 = 533957395;
_Bool var_19 = (_Bool)1;
int var_20 = -652250711;
unsigned char var_21 = (unsigned char)237;
unsigned char arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
long long int arr_2 [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] ;
long long int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1233332555858288890LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2925024715U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2056505266397761562LL;
}

void checksum() {
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
