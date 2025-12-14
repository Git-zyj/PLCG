#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-122;
unsigned char var_4 = (unsigned char)90;
unsigned short var_6 = (unsigned short)5603;
unsigned short var_10 = (unsigned short)16405;
unsigned char var_11 = (unsigned char)179;
long long int var_13 = 2996379783153229991LL;
int zero = 0;
signed char var_14 = (signed char)-81;
long long int var_15 = 851181190816752722LL;
_Bool var_16 = (_Bool)1;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
signed char arr_3 [18] [18] ;
signed char arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 7526860889040164362LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 16803898476967248541ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 15264116266756544983ULL : 16477939255450493327ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-19 : (signed char)-41;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
