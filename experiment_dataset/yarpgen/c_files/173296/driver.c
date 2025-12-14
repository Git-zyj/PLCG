#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
int var_2 = -663299619;
long long int var_3 = 5035048081015439984LL;
long long int var_5 = 7610334007687215316LL;
unsigned long long int var_7 = 9710398805202338650ULL;
signed char var_8 = (signed char)-5;
signed char var_10 = (signed char)-40;
signed char var_11 = (signed char)-67;
unsigned short var_12 = (unsigned short)54340;
short var_13 = (short)18756;
signed char var_16 = (signed char)-97;
int zero = 0;
unsigned long long int var_18 = 3583576551655055956ULL;
long long int var_19 = 4101987391753204560LL;
signed char var_20 = (signed char)127;
unsigned short var_21 = (unsigned short)56497;
_Bool var_22 = (_Bool)1;
int var_23 = -414316611;
unsigned int arr_8 [25] ;
signed char arr_13 [23] ;
long long int arr_14 [23] [23] ;
int arr_15 [23] [23] ;
int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3060562530U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 5253457711500585677LL : 5991683519750188930LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 518159473 : 1450460951;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1754119629 : -404871604;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
