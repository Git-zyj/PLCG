#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5657924472550290739LL;
unsigned short var_1 = (unsigned short)41573;
unsigned long long int var_2 = 13896619172996956144ULL;
unsigned short var_3 = (unsigned short)13918;
unsigned int var_4 = 976059380U;
int var_5 = -2119287081;
int var_6 = -86126065;
short var_7 = (short)9254;
short var_8 = (short)12385;
int var_9 = 1704917068;
long long int var_11 = -5248011466409888000LL;
long long int var_12 = -7578810346864375419LL;
int zero = 0;
unsigned int var_13 = 320677846U;
int var_14 = 160257493;
int var_15 = -783887092;
unsigned short var_16 = (unsigned short)43158;
long long int var_17 = -810894758229081118LL;
short arr_0 [17] ;
signed char arr_2 [17] ;
int arr_4 [21] [21] ;
signed char arr_5 [21] ;
unsigned int arr_7 [12] ;
unsigned long long int arr_8 [12] ;
unsigned long long int arr_3 [17] ;
unsigned int arr_6 [21] ;
unsigned int arr_10 [12] [12] ;
unsigned long long int arr_11 [12] ;
unsigned int arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)15195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -891026900;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 4061970219U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 12297202585166520029ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1860222857230782717ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1896733675U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 3009965689U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 9775518907610488701ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = 1874408326U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
