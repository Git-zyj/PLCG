#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21817;
signed char var_2 = (signed char)-16;
unsigned short var_6 = (unsigned short)29392;
unsigned short var_7 = (unsigned short)19527;
unsigned long long int var_9 = 15083359974126008831ULL;
signed char var_11 = (signed char)78;
int zero = 0;
unsigned short var_13 = (unsigned short)664;
signed char var_14 = (signed char)-42;
unsigned int var_15 = 862135631U;
unsigned int var_16 = 973439032U;
signed char var_17 = (signed char)-93;
signed char var_18 = (signed char)98;
unsigned int arr_3 [19] ;
short arr_4 [19] ;
short arr_2 [19] ;
unsigned short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2186333597U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-10485;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-32742 : (short)-22839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)41597 : (unsigned short)55828;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
