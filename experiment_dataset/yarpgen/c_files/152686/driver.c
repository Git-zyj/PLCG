#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17239957467891747228ULL;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)53;
unsigned int var_6 = 2250101911U;
unsigned long long int var_8 = 5904216966680781151ULL;
unsigned char var_9 = (unsigned char)160;
signed char var_11 = (signed char)6;
unsigned long long int var_12 = 12875183123613373151ULL;
unsigned short var_13 = (unsigned short)6280;
int zero = 0;
short var_15 = (short)7299;
int var_16 = -2007411179;
_Bool var_17 = (_Bool)0;
short var_18 = (short)8616;
short var_19 = (short)16046;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3547487516U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
