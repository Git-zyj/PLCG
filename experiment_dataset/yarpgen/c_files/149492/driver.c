#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11209559108360778624ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 2824551998915285373ULL;
unsigned int var_10 = 1899755123U;
unsigned char var_12 = (unsigned char)239;
int zero = 0;
int var_13 = 1975713613;
signed char var_14 = (signed char)-94;
short var_15 = (short)233;
int var_16 = -1779601220;
unsigned int var_17 = 2845889069U;
unsigned int var_18 = 2793775068U;
unsigned short arr_0 [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46679 : (unsigned short)34140;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58 : (unsigned short)43093;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
