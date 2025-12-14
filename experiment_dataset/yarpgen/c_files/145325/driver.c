#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9017688065818475083LL;
unsigned int var_3 = 1727739139U;
unsigned long long int var_6 = 2833404067497831392ULL;
long long int var_8 = 4357964218746570730LL;
long long int var_11 = -7702208674036742514LL;
int zero = 0;
int var_12 = 1829973223;
_Bool var_13 = (_Bool)0;
int var_14 = 1525941047;
unsigned char var_15 = (unsigned char)162;
signed char var_16 = (signed char)-5;
unsigned long long int var_17 = 7891363839172689680ULL;
short arr_0 [23] ;
unsigned long long int arr_1 [23] ;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-27781;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7296493046579038302ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-16;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
