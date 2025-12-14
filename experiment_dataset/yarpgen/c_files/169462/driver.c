#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3977335550867873968LL;
_Bool var_1 = (_Bool)1;
long long int var_5 = -4353446254188451101LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 6863112283835525544LL;
long long int var_11 = 7790548022028945700LL;
unsigned short var_13 = (unsigned short)36219;
int zero = 0;
unsigned long long int var_15 = 18126011662743659813ULL;
long long int var_16 = 7050965015940272978LL;
unsigned long long int var_17 = 15253082887707093539ULL;
short var_18 = (short)-12601;
unsigned int arr_0 [11] ;
int arr_1 [11] ;
unsigned int arr_3 [11] ;
unsigned char arr_4 [11] ;
unsigned char arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3032993482U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1353599183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1056767909U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
