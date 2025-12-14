#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)39;
_Bool var_6 = (_Bool)0;
int var_9 = -961562085;
unsigned short var_10 = (unsigned short)21847;
unsigned long long int var_15 = 14552438125471350489ULL;
unsigned int var_17 = 3530666268U;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
unsigned short var_20 = (unsigned short)10120;
unsigned char var_21 = (unsigned char)75;
unsigned char var_22 = (unsigned char)174;
signed char var_23 = (signed char)(-127 - 1);
unsigned short var_24 = (unsigned short)32055;
signed char arr_0 [24] [24] ;
signed char arr_1 [24] ;
long long int arr_5 [23] ;
short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 9222909141415827978LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)4649;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
