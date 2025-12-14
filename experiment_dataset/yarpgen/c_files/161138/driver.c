#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
signed char var_1 = (signed char)33;
unsigned long long int var_2 = 5073513832937364436ULL;
short var_5 = (short)-21275;
unsigned long long int var_6 = 156188086681204036ULL;
unsigned short var_7 = (unsigned short)9230;
unsigned long long int var_9 = 11443469651540450955ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 11503683707204159834ULL;
unsigned long long int var_13 = 1056604855292903234ULL;
unsigned char var_14 = (unsigned char)174;
short var_15 = (short)-13378;
unsigned int var_16 = 1449395552U;
short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)26147;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3062372448U : 1234143621U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
