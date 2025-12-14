#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)213;
int var_6 = 1886801676;
_Bool var_7 = (_Bool)1;
int var_9 = 1310595057;
unsigned short var_10 = (unsigned short)33813;
int zero = 0;
int var_11 = -413298773;
int var_12 = 967977709;
unsigned int var_13 = 2154978682U;
unsigned short var_14 = (unsigned short)33407;
unsigned short var_15 = (unsigned short)61522;
unsigned char arr_0 [18] ;
_Bool arr_1 [18] [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_2 [18] ;
int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 140656065215002772LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 6908573943377830925ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 633637912;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
