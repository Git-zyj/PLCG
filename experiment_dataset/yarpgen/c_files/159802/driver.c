#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)17;
_Bool var_4 = (_Bool)1;
long long int var_8 = -5959846154501159839LL;
unsigned long long int var_9 = 16130744018485664480ULL;
signed char var_10 = (signed char)68;
long long int var_12 = -6790633164804225287LL;
int zero = 0;
unsigned char var_14 = (unsigned char)105;
long long int var_15 = 5409383920078814748LL;
short var_16 = (short)15342;
short var_17 = (short)-2675;
long long int var_18 = -2681628685978941443LL;
unsigned short arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned int arr_3 [24] [24] ;
long long int arr_4 [24] ;
int arr_2 [12] [12] ;
long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)46498;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1306222870U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -5591393862753843281LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1503878096 : 1252569768;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -8421081309323789745LL : 6026307493795228226LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
