#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 704023913029877490LL;
short var_2 = (short)8375;
long long int var_3 = 2881201049579122932LL;
long long int var_4 = -4283082019209606223LL;
unsigned char var_6 = (unsigned char)113;
signed char var_7 = (signed char)-124;
unsigned int var_8 = 1340017800U;
unsigned int var_10 = 156282903U;
int zero = 0;
short var_12 = (short)-5393;
short var_13 = (short)-21123;
int var_14 = -604688704;
signed char var_15 = (signed char)-71;
long long int var_16 = 6466041925637233465LL;
unsigned int var_17 = 2813732680U;
unsigned int var_18 = 3059869480U;
long long int var_19 = 2226546522531588148LL;
int var_20 = 1145177243;
short arr_0 [25] ;
_Bool arr_1 [25] ;
short arr_4 [25] [25] [25] ;
short arr_7 [25] [25] ;
_Bool arr_8 [25] [25] ;
unsigned char arr_12 [23] ;
unsigned int arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-28526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)7337;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (short)17994;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 3241244464U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
