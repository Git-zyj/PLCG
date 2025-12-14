#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15797;
int var_1 = -2075384675;
int var_2 = -1863329030;
int var_3 = 837235519;
signed char var_5 = (signed char)-61;
short var_7 = (short)-31812;
long long int var_9 = 6359915825648570853LL;
int zero = 0;
int var_10 = -1791504466;
short var_11 = (short)27524;
unsigned int var_12 = 3370543912U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
signed char arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned short arr_4 [10] ;
short arr_2 [22] ;
short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-39 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 6756391782252736436ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)51194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)32023 : (short)27369;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-21068;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
