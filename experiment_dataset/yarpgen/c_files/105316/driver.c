#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 5578223999254345733ULL;
unsigned short var_10 = (unsigned short)11282;
unsigned int var_11 = 1022497908U;
unsigned int var_12 = 2510446363U;
unsigned short var_13 = (unsigned short)15067;
int zero = 0;
unsigned char var_19 = (unsigned char)220;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9143731597976417502ULL;
long long int var_22 = 1256714251357526785LL;
unsigned long long int var_23 = 11394525832462501307ULL;
unsigned long long int var_24 = 6635066786924019636ULL;
unsigned short var_25 = (unsigned short)44342;
signed char var_26 = (signed char)45;
unsigned long long int var_27 = 16078732798783693254ULL;
unsigned short var_28 = (unsigned short)62308;
unsigned int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_7 [15] ;
short arr_8 [15] ;
short arr_12 [10] ;
int arr_3 [20] ;
long long int arr_9 [15] [15] ;
int arr_10 [15] ;
short arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2065847391U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)15455;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)17924;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 10947813U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)8389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-15028 : (short)-10636;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1571577214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 7004640564488296906LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -2139391810;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)7105 : (short)-27264;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
