#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 856741922832642140ULL;
int var_2 = -701493355;
unsigned short var_3 = (unsigned short)12388;
int var_4 = -1372104427;
long long int var_5 = 5506439345783447723LL;
long long int var_8 = 2786532540770782292LL;
unsigned short var_12 = (unsigned short)40691;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-13;
unsigned short var_15 = (unsigned short)10480;
int zero = 0;
int var_16 = -1027754419;
signed char var_17 = (signed char)18;
unsigned long long int var_18 = 11591747904691961127ULL;
unsigned short var_19 = (unsigned short)26556;
unsigned long long int var_20 = 15419559619338461735ULL;
unsigned short arr_0 [12] ;
int arr_8 [15] [15] ;
unsigned short arr_3 [12] ;
int arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)11497;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = -544816137;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)45501;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 625515962;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
