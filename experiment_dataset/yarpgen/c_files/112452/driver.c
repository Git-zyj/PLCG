#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
unsigned short var_4 = (unsigned short)21644;
unsigned long long int var_8 = 13014677548182574540ULL;
unsigned char var_10 = (unsigned char)213;
long long int var_11 = 6292440916089910171LL;
int zero = 0;
unsigned short var_12 = (unsigned short)7868;
unsigned char var_13 = (unsigned char)196;
unsigned char var_14 = (unsigned char)233;
unsigned long long int var_15 = 17424125667831300478ULL;
long long int var_16 = 7129477547690510931LL;
unsigned int var_17 = 1311710839U;
int var_18 = 2009714503;
signed char arr_0 [12] ;
long long int arr_1 [12] ;
signed char arr_4 [12] ;
int arr_5 [12] ;
short arr_2 [12] [12] ;
long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8884277568323997439LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -2133185847;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)32518;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -3806725319800425516LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
