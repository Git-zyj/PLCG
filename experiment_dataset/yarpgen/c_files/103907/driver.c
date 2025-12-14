#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)125;
unsigned long long int var_6 = 9099184067743945563ULL;
long long int var_12 = -5875055332350989749LL;
int zero = 0;
unsigned short var_18 = (unsigned short)18149;
unsigned long long int var_19 = 1454848953646897145ULL;
unsigned short var_20 = (unsigned short)63311;
unsigned long long int var_21 = 955185685623640431ULL;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_2 [13] ;
short arr_4 [13] ;
signed char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3575888286632374851ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 12613563824550678923ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)2811;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
