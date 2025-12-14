#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3353381975U;
unsigned short var_1 = (unsigned short)29873;
unsigned char var_3 = (unsigned char)174;
unsigned int var_6 = 2090252394U;
int var_7 = 345085605;
unsigned char var_8 = (unsigned char)245;
unsigned short var_9 = (unsigned short)29123;
unsigned char var_10 = (unsigned char)155;
unsigned long long int var_12 = 12477023078023303071ULL;
unsigned short var_13 = (unsigned short)52561;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)65;
int zero = 0;
long long int var_16 = 2192670694467080535LL;
unsigned short var_17 = (unsigned short)13184;
signed char var_18 = (signed char)109;
unsigned int var_19 = 501905650U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5255477886911985774LL;
unsigned short arr_1 [24] ;
short arr_4 [18] ;
unsigned short arr_5 [18] ;
int arr_6 [18] ;
unsigned int arr_2 [24] ;
unsigned short arr_3 [24] ;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)40705;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)31037;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)42136;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1455319483;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1416134497U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)5719;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1233375844U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
