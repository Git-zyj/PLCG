#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)50;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)24701;
short var_8 = (short)-5657;
short var_9 = (short)-993;
int zero = 0;
int var_10 = 2031225609;
unsigned int var_11 = 3751457804U;
short var_12 = (short)6448;
int var_13 = 730008707;
unsigned short arr_0 [16] ;
int arr_1 [16] ;
signed char arr_2 [16] [16] ;
unsigned char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)24792;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -2042029478;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)60;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
