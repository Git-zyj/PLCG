#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)178;
unsigned char var_12 = (unsigned char)193;
signed char var_15 = (signed char)3;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)14957;
unsigned short var_21 = (unsigned short)35406;
signed char var_22 = (signed char)89;
int var_23 = -392019047;
long long int arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
unsigned int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -8264630780488392415LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 508730559U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2055287596576607045ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
