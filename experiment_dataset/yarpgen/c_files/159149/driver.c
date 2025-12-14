#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5794355212622569333ULL;
unsigned int var_3 = 3133123445U;
unsigned long long int var_4 = 4786339377648130840ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 8464668607619368607ULL;
unsigned short var_7 = (unsigned short)23600;
unsigned char var_8 = (unsigned char)251;
short var_9 = (short)3913;
int var_10 = 1627088805;
unsigned char var_11 = (unsigned char)247;
short var_12 = (short)-939;
int var_13 = 1548469048;
int zero = 0;
unsigned long long int var_14 = 6160765190435546412ULL;
short var_15 = (short)-22284;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -70122127560033596LL;
unsigned int var_19 = 3913980936U;
short arr_0 [18] ;
int arr_3 [18] ;
signed char arr_7 [20] ;
_Bool arr_5 [18] ;
unsigned int arr_8 [20] [20] ;
unsigned int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-29893;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -298705119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 2914351665U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 3831583375U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
