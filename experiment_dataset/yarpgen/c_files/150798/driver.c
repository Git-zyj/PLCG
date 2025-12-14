#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20946;
unsigned char var_3 = (unsigned char)51;
signed char var_4 = (signed char)125;
long long int var_6 = 8456596213133703523LL;
short var_7 = (short)-12153;
int var_8 = 164935783;
int var_11 = 134176360;
int var_13 = 170833058;
int zero = 0;
long long int var_15 = 6985807038207547843LL;
long long int var_16 = -7131614321741582610LL;
signed char var_17 = (signed char)-93;
short var_18 = (short)-30640;
short var_19 = (short)10998;
unsigned short arr_1 [23] ;
unsigned short arr_3 [23] [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)53050;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24724;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)24030;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
