#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_7 = (short)10883;
long long int var_9 = 8060681779632445398LL;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)28578;
int zero = 0;
long long int var_18 = 705739303632753563LL;
unsigned int var_19 = 352066440U;
unsigned short var_20 = (unsigned short)18610;
unsigned long long int var_21 = 15405440278258718065ULL;
long long int var_22 = 7410984299274116780LL;
long long int var_23 = 3260672261437356264LL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)109;
_Bool arr_0 [16] ;
signed char arr_1 [16] ;
long long int arr_3 [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5962708379655839573LL : -9151913735185713379LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6943909987264182125ULL : 6607405654722878270ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
