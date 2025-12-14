#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29368;
unsigned int var_2 = 1680120597U;
unsigned char var_4 = (unsigned char)238;
unsigned short var_6 = (unsigned short)26473;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -1981140725;
signed char var_14 = (signed char)56;
long long int var_15 = -3568379858244054722LL;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] ;
_Bool arr_2 [22] [22] ;
signed char arr_3 [22] [22] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)24372;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 129848587U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)14;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
