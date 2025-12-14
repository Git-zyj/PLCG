#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10744;
short var_2 = (short)18053;
signed char var_4 = (signed char)90;
short var_6 = (short)-1192;
short var_7 = (short)16069;
unsigned int var_8 = 1413394417U;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
unsigned long long int var_12 = 18281908708530215908ULL;
int var_13 = 1812600733;
unsigned char var_14 = (unsigned char)152;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 45448511U;
signed char var_17 = (signed char)-113;
short var_18 = (short)-27283;
_Bool arr_0 [17] [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned char arr_3 [18] ;
int arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
short arr_6 [18] [18] [18] ;
unsigned short arr_2 [17] ;
short arr_9 [18] ;
long long int arr_13 [18] ;
unsigned int arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 288566528991777563ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -456337080;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 10819667832786023501ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)9586;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)60872;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-3774 : (short)25950;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -2756044425818642127LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 2017398929U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
