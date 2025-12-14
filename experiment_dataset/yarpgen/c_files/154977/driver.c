#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11191318577042696625ULL;
short var_11 = (short)-18688;
unsigned short var_15 = (unsigned short)31728;
unsigned short var_17 = (unsigned short)33857;
unsigned char var_18 = (unsigned char)109;
int zero = 0;
unsigned short var_20 = (unsigned short)65517;
unsigned char var_21 = (unsigned char)116;
unsigned short var_22 = (unsigned short)25250;
unsigned char var_23 = (unsigned char)127;
unsigned short var_24 = (unsigned short)21862;
signed char var_25 = (signed char)20;
long long int arr_0 [11] ;
unsigned int arr_2 [11] ;
_Bool arr_3 [11] ;
unsigned short arr_8 [11] ;
short arr_5 [11] ;
unsigned long long int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -6120738709140751843LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3752099475U : 790397698U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned short)16089;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-27917 : (short)-19979;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 365498220875680079ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
