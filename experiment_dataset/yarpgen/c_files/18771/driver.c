#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11571;
long long int var_1 = 8820630593164677164LL;
unsigned short var_2 = (unsigned short)31868;
unsigned short var_3 = (unsigned short)38345;
unsigned char var_7 = (unsigned char)229;
unsigned int var_8 = 35668791U;
unsigned char var_9 = (unsigned char)189;
unsigned long long int var_10 = 14204074319789078561ULL;
int zero = 0;
short var_11 = (short)3397;
unsigned long long int var_12 = 14276280905731258753ULL;
int var_13 = 161535523;
unsigned long long int var_14 = 1037275915453789240ULL;
signed char var_15 = (signed char)-66;
short var_16 = (short)-7375;
unsigned int var_17 = 2855521807U;
int var_18 = -2106539505;
short var_19 = (short)32733;
_Bool var_20 = (_Bool)1;
unsigned int arr_1 [17] ;
int arr_4 [25] [25] ;
signed char arr_2 [17] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 109028181U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -1003161467;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2186945405U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
