#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26883;
unsigned char var_1 = (unsigned char)167;
int var_3 = 1905629237;
unsigned long long int var_5 = 17082000911008741683ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 4147984202U;
_Bool var_13 = (_Bool)0;
unsigned int var_18 = 3471810494U;
unsigned char var_19 = (unsigned char)10;
int zero = 0;
unsigned short var_20 = (unsigned short)34789;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)6794;
long long int var_23 = 68199719659932572LL;
unsigned short var_24 = (unsigned short)5670;
int var_25 = -1293932656;
signed char var_26 = (signed char)-73;
short arr_0 [20] [20] ;
unsigned int arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned char arr_9 [20] [20] [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11202;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2897657744U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
