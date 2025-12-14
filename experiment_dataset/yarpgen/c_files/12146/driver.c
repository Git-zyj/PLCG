#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3842440789466935354ULL;
unsigned long long int var_1 = 7442670837104475336ULL;
int var_3 = -1039386051;
unsigned char var_5 = (unsigned char)253;
unsigned char var_8 = (unsigned char)3;
int var_11 = 1897914111;
int zero = 0;
signed char var_13 = (signed char)60;
short var_14 = (short)8011;
signed char var_15 = (signed char)58;
int var_16 = 258478215;
int arr_2 [13] ;
int arr_4 [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2043940473;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1668722051;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)42250;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
