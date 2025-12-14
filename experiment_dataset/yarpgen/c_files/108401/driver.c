#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16597;
unsigned long long int var_5 = 16079004974568003038ULL;
long long int var_6 = 1303741494582349259LL;
long long int var_7 = -502729538857327603LL;
unsigned short var_12 = (unsigned short)57380;
int zero = 0;
unsigned int var_14 = 797806339U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)195;
int var_17 = 1751376036;
unsigned char var_18 = (unsigned char)122;
unsigned int var_19 = 1072120061U;
unsigned long long int var_20 = 14155895185248106241ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned char arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3013619110693775184ULL : 14227374369103681034ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2412533918666166209ULL : 3990917060110121180ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42422 : (unsigned short)7938;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
