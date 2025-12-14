#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1960875836;
signed char var_4 = (signed char)90;
int var_5 = -1882415674;
unsigned int var_7 = 559971399U;
unsigned int var_8 = 595310886U;
unsigned char var_9 = (unsigned char)144;
short var_10 = (short)23517;
int zero = 0;
unsigned char var_12 = (unsigned char)183;
unsigned int var_13 = 4012230780U;
unsigned int var_14 = 3812726937U;
short var_15 = (short)4779;
long long int var_16 = -1891075618252696778LL;
signed char var_17 = (signed char)-90;
unsigned int arr_0 [20] [20] ;
int arr_1 [20] ;
int arr_2 [20] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 384004707U : 3298731513U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 980369955 : -1377833405;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1989401585 : 332509862;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26552 : (unsigned short)4879;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
