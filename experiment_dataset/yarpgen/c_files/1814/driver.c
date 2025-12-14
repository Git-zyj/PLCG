#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-112;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 888356741U;
unsigned char var_11 = (unsigned char)57;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
unsigned char var_15 = (unsigned char)50;
short var_16 = (short)-2655;
int var_17 = -1382202523;
long long int var_18 = 7347088762831337440LL;
_Bool var_19 = (_Bool)0;
int var_20 = -1403106496;
unsigned char var_21 = (unsigned char)58;
unsigned char arr_0 [15] ;
short arr_2 [15] ;
short arr_3 [15] ;
unsigned int arr_6 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)12283;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-23539;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 4135605524U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 5566665477703934072ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
