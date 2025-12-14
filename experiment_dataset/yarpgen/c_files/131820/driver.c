#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned char var_1 = (unsigned char)89;
int var_2 = -587041338;
unsigned int var_3 = 2061064410U;
int var_4 = -1209463204;
unsigned int var_5 = 1954178045U;
short var_6 = (short)-10079;
int var_8 = 641554041;
unsigned short var_9 = (unsigned short)47948;
unsigned char var_10 = (unsigned char)4;
unsigned long long int var_11 = 6502369484445878048ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15997579936345868141ULL;
unsigned char var_14 = (unsigned char)38;
int var_15 = -519774337;
unsigned long long int arr_0 [20] [20] ;
short arr_1 [20] ;
int arr_2 [20] [20] [20] ;
long long int arr_3 [20] ;
_Bool arr_6 [15] ;
unsigned long long int arr_7 [15] ;
unsigned int arr_4 [20] [20] ;
unsigned int arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 14601042943631712994ULL : 4281516894585741038ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)28678 : (short)4381;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1713254985 : 971233749;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1189080597794362205LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3047486144516576759ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 3958790052U : 3088560828U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2532979401U : 2744223161U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
