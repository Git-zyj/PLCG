#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 18055374209373629870ULL;
unsigned char var_7 = (unsigned char)76;
signed char var_8 = (signed char)-27;
signed char var_13 = (signed char)26;
int var_17 = 1235789503;
int zero = 0;
signed char var_19 = (signed char)122;
unsigned int var_20 = 4234971235U;
unsigned int var_21 = 3195245035U;
short var_22 = (short)11035;
unsigned int arr_0 [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 865489563U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
