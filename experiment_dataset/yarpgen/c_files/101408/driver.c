#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15448;
unsigned int var_2 = 1721289741U;
signed char var_3 = (signed char)-104;
unsigned int var_5 = 1420517524U;
unsigned long long int var_7 = 13666117718543249588ULL;
unsigned int var_8 = 2063174805U;
signed char var_9 = (signed char)85;
int zero = 0;
unsigned long long int var_12 = 4455659718539065789ULL;
short var_13 = (short)-13471;
unsigned int var_14 = 704053547U;
short var_15 = (short)-29428;
int var_16 = -554740466;
unsigned short var_17 = (unsigned short)25541;
unsigned char var_18 = (unsigned char)71;
int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned char arr_2 [12] ;
unsigned short arr_6 [12] ;
unsigned char arr_8 [22] ;
int arr_4 [12] ;
int arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1707210199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 2100674983446860646LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)21598;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1238651147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1545873035 : -564856552;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
