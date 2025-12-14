#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -491809779;
unsigned char var_1 = (unsigned char)7;
signed char var_2 = (signed char)98;
unsigned char var_4 = (unsigned char)33;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8883634980134309002ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 925656314U;
unsigned short var_12 = (unsigned short)42147;
unsigned int var_16 = 3375922447U;
unsigned char var_17 = (unsigned char)10;
short var_18 = (short)-615;
int zero = 0;
int var_19 = 1729192193;
int var_20 = 866163165;
long long int var_21 = -1058328800780865082LL;
int var_22 = 1946920544;
unsigned long long int arr_5 [11] ;
_Bool arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5193242190083441818ULL : 6081437254067376135ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
