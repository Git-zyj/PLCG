#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9059610810041314562ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 584476143U;
unsigned short var_11 = (unsigned short)31874;
int var_12 = 2113568942;
unsigned long long int var_15 = 16042957341176148061ULL;
int var_16 = -1311896824;
unsigned short var_17 = (unsigned short)55436;
int zero = 0;
unsigned short var_18 = (unsigned short)58584;
unsigned int var_19 = 259333842U;
unsigned int var_20 = 1610245712U;
unsigned short var_21 = (unsigned short)61445;
unsigned short var_22 = (unsigned short)44931;
int var_23 = -255094607;
_Bool var_24 = (_Bool)1;
unsigned short arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_4 [20] ;
_Bool arr_5 [20] ;
_Bool arr_3 [20] ;
int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)20081;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3304133973904977445ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3187536140448706580ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1579739751;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
