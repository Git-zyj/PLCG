#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14337;
unsigned int var_4 = 4267230854U;
unsigned char var_8 = (unsigned char)179;
unsigned short var_9 = (unsigned short)11935;
unsigned int var_13 = 3554952433U;
unsigned int var_14 = 3458428963U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17117597540519849933ULL;
unsigned long long int var_19 = 17891836169607032925ULL;
signed char var_20 = (signed char)113;
int var_21 = 1305576571;
int var_22 = -2129629159;
int var_23 = 1716033542;
unsigned char var_24 = (unsigned char)187;
unsigned int arr_0 [16] ;
int arr_1 [16] ;
int arr_3 [16] ;
unsigned long long int arr_4 [16] ;
unsigned char arr_2 [16] ;
unsigned long long int arr_5 [16] ;
unsigned long long int arr_6 [16] ;
short arr_9 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2362098783U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -517984063;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -579982060;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 11308977206005590137ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 3722306929189913102ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2624783212174612895ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-9026;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
