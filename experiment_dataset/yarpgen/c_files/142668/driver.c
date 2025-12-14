#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24139;
unsigned short var_1 = (unsigned short)27605;
long long int var_4 = -9213941880883290235LL;
unsigned char var_5 = (unsigned char)141;
long long int var_7 = -2995275952734290105LL;
unsigned int var_8 = 1834761776U;
signed char var_9 = (signed char)-17;
long long int var_10 = 2427770929639923665LL;
int zero = 0;
unsigned long long int var_11 = 17779013470605574299ULL;
unsigned short var_12 = (unsigned short)64569;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)7409;
unsigned short var_15 = (unsigned short)39363;
long long int var_16 = -7512661498910417425LL;
int var_17 = -1279331221;
unsigned char arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
signed char arr_4 [18] [18] [18] ;
short arr_5 [18] ;
short arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 12432430059144111416ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5876263854032992331ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)26551;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-5352;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
