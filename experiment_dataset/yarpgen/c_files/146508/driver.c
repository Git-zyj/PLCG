#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)19;
int var_7 = -425461969;
int zero = 0;
long long int var_13 = -4305875712603215174LL;
signed char var_14 = (signed char)10;
unsigned char var_15 = (unsigned char)129;
long long int var_16 = -636520452088110232LL;
int var_17 = -1546201171;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2310745352U;
unsigned int var_20 = 3856227389U;
unsigned short var_21 = (unsigned short)19339;
unsigned long long int var_22 = 15332678076858044718ULL;
long long int var_23 = 5289010086372677620LL;
int var_24 = -336767103;
signed char arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
long long int arr_2 [15] ;
signed char arr_4 [23] ;
unsigned int arr_5 [23] [23] ;
long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3510079559U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -4845450017683232814LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3649487702U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -8314772565004182754LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
