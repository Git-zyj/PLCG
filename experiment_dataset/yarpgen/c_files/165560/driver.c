#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16611295511136588595ULL;
unsigned char var_1 = (unsigned char)42;
int var_2 = 309966714;
unsigned short var_3 = (unsigned short)42588;
signed char var_4 = (signed char)68;
unsigned long long int var_5 = 4531155698948319026ULL;
int var_6 = 625477536;
unsigned long long int var_7 = 11587483555138231570ULL;
long long int var_8 = -5074970255992482148LL;
unsigned short var_9 = (unsigned short)51374;
unsigned long long int var_10 = 4199535798886053263ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
signed char var_12 = (signed char)97;
unsigned short var_13 = (unsigned short)15521;
unsigned short var_14 = (unsigned short)55186;
unsigned short var_15 = (unsigned short)30485;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [21] [21] ;
short arr_1 [21] ;
long long int arr_2 [21] [21] ;
long long int arr_3 [21] ;
_Bool arr_6 [15] [15] ;
unsigned long long int arr_7 [15] [15] ;
unsigned int arr_4 [21] ;
long long int arr_5 [21] ;
signed char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)7691;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 2478453962754860109LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 7549243974866503495LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 8867866752133345037ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1986659770U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -2432731566997644457LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-3 : (signed char)-38;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
