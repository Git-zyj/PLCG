#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1399409680;
unsigned long long int var_3 = 3244682586305592600ULL;
int var_4 = 1717082;
unsigned long long int var_5 = 9397472454212750206ULL;
long long int var_7 = 4367434265761372175LL;
unsigned short var_9 = (unsigned short)26641;
signed char var_10 = (signed char)-68;
unsigned short var_12 = (unsigned short)20612;
int zero = 0;
int var_13 = -1601230213;
unsigned short var_14 = (unsigned short)56405;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)134;
unsigned long long int var_17 = 1503840428548853384ULL;
long long int var_18 = -8588761065357196634LL;
signed char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_3 [23] [23] ;
_Bool arr_4 [23] [23] ;
_Bool arr_2 [20] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 10087399778877469978ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28500;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3880040028U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
