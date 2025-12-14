#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6959176781546286372ULL;
unsigned char var_10 = (unsigned char)235;
unsigned char var_11 = (unsigned char)161;
signed char var_14 = (signed char)-114;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-78;
unsigned char var_19 = (unsigned char)250;
int zero = 0;
short var_20 = (short)-11862;
int var_21 = 546835479;
short var_22 = (short)13651;
long long int var_23 = 2514008075277440073LL;
int var_24 = 1953564392;
_Bool var_25 = (_Bool)1;
unsigned long long int arr_0 [22] [22] ;
unsigned char arr_1 [22] [22] ;
short arr_2 [22] [22] [22] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2980381271346532295ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-986 : (short)7409;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)189 : (unsigned char)199;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
