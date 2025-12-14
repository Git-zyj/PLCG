#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-76;
long long int var_2 = -344161953808537108LL;
unsigned int var_7 = 485851925U;
unsigned long long int var_10 = 1475231563938638059ULL;
short var_13 = (short)4488;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2684181779U;
unsigned short var_17 = (unsigned short)32046;
long long int var_18 = -570097300385811919LL;
_Bool var_19 = (_Bool)1;
long long int arr_3 [15] [15] ;
unsigned short arr_6 [15] ;
unsigned int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 858667420591120713LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42314 : (unsigned short)44019;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 192968865U : 4186303329U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
