#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1089402589U;
unsigned char var_7 = (unsigned char)141;
unsigned char var_8 = (unsigned char)205;
unsigned int var_15 = 899058596U;
unsigned int var_16 = 2052152739U;
int zero = 0;
signed char var_18 = (signed char)79;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)42228;
unsigned char var_21 = (unsigned char)83;
unsigned char var_22 = (unsigned char)5;
unsigned char arr_0 [24] [24] ;
int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -1285389587;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6991875716928238778ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6246771490620232146LL : 5623911975017215279LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
