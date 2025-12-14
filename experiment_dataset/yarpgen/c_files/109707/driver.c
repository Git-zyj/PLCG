#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5170508201763127356LL;
signed char var_1 = (signed char)107;
unsigned int var_2 = 2927389210U;
unsigned int var_4 = 4256960372U;
int var_5 = -1278880444;
short var_6 = (short)26608;
unsigned long long int var_8 = 17471163840743776375ULL;
short var_9 = (short)25582;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
unsigned char var_14 = (unsigned char)170;
unsigned short var_15 = (unsigned short)62273;
unsigned char var_16 = (unsigned char)38;
short var_17 = (short)-18391;
unsigned short var_18 = (unsigned short)56483;
signed char var_19 = (signed char)22;
long long int var_20 = 3071917331844334176LL;
unsigned char var_21 = (unsigned char)232;
signed char arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
unsigned char arr_3 [21] [21] ;
unsigned char arr_4 [21] [21] ;
int arr_6 [21] [21] ;
int arr_8 [21] [21] [21] ;
signed char arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)6686;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1097579587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -9671839;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)97;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
