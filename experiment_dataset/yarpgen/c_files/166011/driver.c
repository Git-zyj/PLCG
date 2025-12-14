#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30175;
int var_7 = 1636311834;
unsigned int var_10 = 2907845109U;
short var_13 = (short)-15925;
unsigned long long int var_16 = 10150578000255071464ULL;
int zero = 0;
unsigned long long int var_19 = 17838410274603381399ULL;
signed char var_20 = (signed char)73;
unsigned int var_21 = 1942684502U;
unsigned short var_22 = (unsigned short)13792;
int var_23 = 556160189;
signed char var_24 = (signed char)-111;
long long int arr_0 [11] ;
int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -830565745525386912LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -1148655018;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 6523824973005778437ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)3752;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
