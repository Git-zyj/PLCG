#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned int var_2 = 549395719U;
short var_3 = (short)-9910;
unsigned long long int var_4 = 3049677682009892889ULL;
short var_6 = (short)-28223;
_Bool var_7 = (_Bool)1;
int var_9 = 1102711842;
int zero = 0;
short var_10 = (short)-2706;
unsigned char var_11 = (unsigned char)235;
signed char var_12 = (signed char)-109;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)65368;
unsigned char var_15 = (unsigned char)10;
signed char var_16 = (signed char)81;
int var_17 = 1006805542;
unsigned long long int arr_1 [18] [18] ;
unsigned int arr_2 [18] [18] ;
long long int arr_3 [18] [18] ;
int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2095155702479526296ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2196587408U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1358585251826575072LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -93020915;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
