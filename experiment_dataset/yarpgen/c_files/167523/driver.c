#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1693588377;
_Bool var_3 = (_Bool)0;
int var_5 = -215468177;
short var_6 = (short)-1611;
unsigned int var_7 = 3320626089U;
short var_8 = (short)-22724;
unsigned char var_10 = (unsigned char)201;
unsigned char var_12 = (unsigned char)39;
unsigned short var_14 = (unsigned short)47886;
int var_15 = -1714205611;
int zero = 0;
unsigned char var_16 = (unsigned char)29;
unsigned long long int var_17 = 13969003734479024652ULL;
unsigned int var_18 = 2363021923U;
unsigned int var_19 = 1913338695U;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_6 [17] [17] [17] ;
unsigned int arr_8 [17] [17] ;
unsigned int arr_9 [17] [17] [17] ;
signed char arr_16 [10] ;
unsigned char arr_10 [17] ;
unsigned long long int arr_20 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 17049701730383132788ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3618036177U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2614533458U : 3156271071U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 42109016U : 1703693695U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 13554777512853991278ULL : 15845192914835578983ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
