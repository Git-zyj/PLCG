#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -735756194;
unsigned int var_3 = 1630871424U;
int var_4 = -246872611;
long long int var_5 = -7281360235896539401LL;
int var_6 = 905588792;
unsigned short var_8 = (unsigned short)52330;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2967278233340028751ULL;
unsigned char var_12 = (unsigned char)198;
unsigned short var_13 = (unsigned short)2132;
unsigned short var_14 = (unsigned short)59318;
unsigned char arr_1 [20] ;
long long int arr_2 [20] ;
unsigned int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -6809401365699486181LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1118093289U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
