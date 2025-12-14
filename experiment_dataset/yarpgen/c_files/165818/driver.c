#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
int var_2 = 157645735;
unsigned int var_4 = 3269747252U;
unsigned char var_6 = (unsigned char)207;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 8045374556233169879ULL;
unsigned char var_12 = (unsigned char)152;
long long int var_14 = 1736014000176823677LL;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
signed char var_20 = (signed char)-59;
signed char var_21 = (signed char)-86;
unsigned short var_22 = (unsigned short)19178;
signed char var_23 = (signed char)49;
long long int arr_0 [23] [23] ;
signed char arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -7608201148089342302LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 6109595253433053710ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
