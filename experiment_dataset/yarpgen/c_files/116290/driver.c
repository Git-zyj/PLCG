#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6959;
unsigned char var_3 = (unsigned char)217;
unsigned short var_4 = (unsigned short)27518;
long long int var_10 = -4923410154014657353LL;
short var_13 = (short)-18370;
unsigned short var_14 = (unsigned short)1092;
unsigned short var_15 = (unsigned short)55436;
unsigned char var_19 = (unsigned char)151;
int zero = 0;
unsigned char var_20 = (unsigned char)243;
signed char var_21 = (signed char)119;
signed char var_22 = (signed char)45;
signed char arr_2 [23] ;
long long int arr_4 [23] [23] [23] ;
signed char arr_5 [23] ;
unsigned int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2352629846812168970LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 2997027317U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
